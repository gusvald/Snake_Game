#ifndef SNAKE_MW_CZ15_253048_SNAKELOGIC_H
#define SNAKE_MW_CZ15_253048_SNAKELOGIC_H

#include <vector>
#include <fstream>

struct field {
    bool Wall = false;
    bool Snake = false;
    bool Fruit = false;
};

enum Gamemode {
    EASY = 1, NORMAL = 2, HARD = 3
};

struct snakePosition {
    int x;
    int y;
    bool isHead = false;
    bool isTail = false;
};

enum direction {
    STOP, LEFT, RIGHT, UPPER, DOWN
};

class SnakeLogic {
    int score = 0;
    bool GameOver = false;
    int width = 50;
    int height = 50;
    field board[100][100];
    Gamemode mode;

    void eatFruit();

    bool isCorrect(int x, int y);

    void isGameover();

    void CreateBoard();

public:
    SnakeLogic(int width, int height, Gamemode mode);

    direction dir = STOP;
    std::vector<snakePosition> snake;
    int ScoreBoard[11];

    int getBoardWidth() const;

    int getBoardHeight() const;

    unsigned int getFieldinfo(int x, int y) const;

    bool Gameended();

    void debug_display();

    void update();

    void movement();

    void movement2();

    void tailLogic();

    void clearBoard();

    void SetCoord();

    bool StupidSnake();

    void turnleft();

    void turnright();

    void turnup();

    void turndown();

    void stopsnake();

    void SafeScore() const;

    void sort();

    void LoadScore();

    void changeDifEas();

    void changeDifNor();

    void changeDifHar();


};


#endif //SNAKE_MW_CZ15_253048_SNAKELOGIC_H
