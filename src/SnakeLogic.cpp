#include <cstdlib>
#include "SnakeLogic.h"
#include<iostream>
#include <conio.h>
#include <zconf.h>


SnakeLogic::SnakeLogic(int width, int height, Gamemode mode) : width(width), height(height), mode(mode) {
    this->width = width;
    this->height = height;

    snakePosition SnakeHead;
    SnakeHead.isHead = true;
    SnakeHead.x = height / 2;
    SnakeHead.y = width / 2;
    board[SnakeHead.x][SnakeHead.y].Snake = true;
    snake.push_back(SnakeHead);

    for (int i = 0; i < 10; i++) {
        ScoreBoard[i] = 0;
    }

}


void SnakeLogic::debug_display() {
    system("cls");
    for (int i = 0; i < height; i++) {
        for (int g = 0; g < width; g++) {
            if (board[i][g].Snake) { std::cout << "S"; }
            else if (board[i][g].Wall) { std::cout << "W"; }
            else if (board[i][g].Fruit) { std::cout << "F"; }
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

}

bool SnakeLogic::isCorrect(int x, int y) {
    int helper = 0;

    if (board[x][y].Wall)
        helper = helper + 1;
    if (board[x][y].Snake)
        helper = helper + 1;
    if (board[x][y].Fruit)
        helper = helper + 1;
    return helper == 0;
}

void SnakeLogic::update() {


    isGameover();
    stopsnake();
    eatFruit();
    clearBoard();
    SetCoord();
    // movement(); to console playing
    movement2();
    tailLogic();
    isGameover();
    // debug_display(); to console playing



}

void SnakeLogic::movement() {
    if (kbhit()) {
        switch (getch()) {
            case 'w':
                if (dir != DOWN)
                    dir = UPPER;
                break;
            case 'd':
                if (dir != LEFT)
                    dir = RIGHT;
                break;
            case 'a':
                if (dir != RIGHT)
                    dir = LEFT;
                break;
            case 's':
                if (dir != UPPER)
                    dir = DOWN;
                break;
            case 'm':
                GameOver = true;
                break;

        }

    }
}

void SnakeLogic::movement2() {

    int a;
    switch (dir) {

        case UPPER:
            a = snake.at(0).x;
            a--;
            snake.at(0).x = a;
            break;

        case DOWN:
            a = snake.at(0).x;
            a++;
            snake.at(0).x = a;
            break;

        case LEFT:
            a = snake.at(0).y;
            a--;
            snake.at(0).y = a;
            break;

        case RIGHT:
            a = snake.at(0).y;
            a++;
            snake.at(0).y = a;
            break;

        case STOP:
            break;
    }

}


void SnakeLogic::isGameover() {

    for (int i = 0; i < height; i++) {
        for (int g = 0; g < width; g++) {
            if (board[i][g].Snake && board[i][g].Wall)
                GameOver = true;
        }
    }

    if (StupidSnake())
        GameOver = true;

    if (GameOver) {
        LoadScore();
        ScoreBoard[10] = score;
        sort();
        SafeScore();
        std::cout << "GAME OVER" << std::endl << "Your score: " << score << std::endl;
    }
}

void SnakeLogic::eatFruit() {
    int helper = 0;

    for (int i = 0; i < height; i++) {
        for (int g = 0; g < width; g++) {
            if (board[i][g].Snake && board[i][g].Fruit) {
                snakePosition new_tail;
                new_tail.isTail = true;
                snake.push_back(new_tail);
                score += 10;
                helper = 1;
                board[i][g].Fruit = false;
            }
        }
    }

    if (helper == 1) {
        int Fruits = 0;
        while (Fruits < 1) {
            int x, y;
            x = rand() % height;
            y = rand() % width;
            if (isCorrect(x, y)) {
                board[x][y].Fruit = true;
                Fruits = Fruits + 1;
            }
        }
    }
}

void SnakeLogic::tailLogic() {
    for (unsigned int i = 0; i <= snake.size() - 1; i++) {
        board[snake.at(i).x][snake.at(i).y].Snake = true;
        if (board[snake.at(i).x][snake.at(i).y].Snake && board[snake.at(i).x][snake.at(i).y].Wall)
            GameOver = true;
    }
}

void SnakeLogic::clearBoard() {
    for (int i = 0; i < height; i++) {
        for (int g = 0; g < width; g++) {
            board[i][g].Snake = false;
        }
    }
}

void SnakeLogic::SetCoord() {
    for (unsigned int i = snake.size() - 1; i > 0; i--) {
        int helperX, helperY;
        helperX = snake.at(i - 1).x;
        helperY = snake.at(i - 1).y;
        snake.at(i).x = helperX;
        snake.at(i).y = helperY;
    }
}

bool SnakeLogic::StupidSnake() {
    for (unsigned int i = 1; i <= snake.size() - 1; i++) {
        if (snake.at(0).x == snake.at(i).x && snake.at(0).y == snake.at(i).y)
            return true;
    }
    return false;
}

int SnakeLogic::getBoardWidth() const {
    return width;
}

int SnakeLogic::getBoardHeight() const {
    return height;
}

unsigned int SnakeLogic::getFieldinfo(int x, int y) const {

    if (board[x][y].Wall)
        return 1;
    if (board[x][y].Snake)
        return 2;
    if (board[x][y].Fruit)
        return 3;
    else return 0;
}

bool SnakeLogic::Gameended() {
    return GameOver;
}

void SnakeLogic::turnleft() {
    if (dir != RIGHT)
        dir = LEFT;
}

void SnakeLogic::turnup() {
    if (dir != DOWN)
        dir = UPPER;
}

void SnakeLogic::turnright() {
    if (dir != LEFT)
        dir = RIGHT;
}

void SnakeLogic::turndown() {
    if (dir != UPPER)
        dir = DOWN;
}

void SnakeLogic::stopsnake() {
    if (GameOver)
        dir = STOP;
}

void SnakeLogic::sort() {
    for (unsigned int i = 0; i < 11; i++) {
        for (unsigned int g = 1; g < 11 - i; g++) {
            if (ScoreBoard[g - 1] < ScoreBoard[g])
                std::swap(ScoreBoard[g - 1], ScoreBoard[g]);
        }
    }
}

void SnakeLogic::SafeScore() const {
    std::fstream file;
    file.open("Score.txt", std::ios::out);
    for (unsigned int i = 0; i < 10; i++) {
        file << ScoreBoard[i] << std::endl;
    }
    file.close();
}

void SnakeLogic::LoadScore() {

    std::fstream file;
    file.open("Score.txt", std::ios::in);
    if (file.good()) {

        std::string line;

        for (int i = 0; i < 10; i++) {
            getline(file, line);
            ScoreBoard[i] = atoi(line.c_str());
        }
    }
    file.close();
}

void SnakeLogic::changeDifEas() {
    mode = EASY;
    CreateBoard();
}

void SnakeLogic::changeDifNor() {
    mode = NORMAL;
    CreateBoard();
}

void SnakeLogic::changeDifHar() {
    mode = HARD;
    CreateBoard();
}

void SnakeLogic::CreateBoard() {

    for (int g = 0; g < width; g++) {
        for (int i = 0; i < height; i++) {
            if (i == height - 1)
                board[i][g].Wall = true;
            if (g == width - 1)
                board[i][g].Wall = true;
            if (g == 0)
                board[i][g].Wall = true;
            if (i == 0)
                board[i][g].Wall = true;
        }
    }

    int Walls = 0;
    while (Walls < mode) {
        int x, y;
        x = rand() % height;
        y = rand() % width;
        if (isCorrect(x, y)) {
            board[x][y].Wall = true;
            Walls = Walls + 1;
        }
    }

    int Fruits = 0;
    while (Fruits < 1) {
        int x, y;
        x = rand() % height;
        y = rand() % width;
        if (isCorrect(x, y)) {
            board[x][y].Fruit = true;
            Fruits = Fruits + 1;
        }
    }

}















