//
// Created by Gus on 25.04.2020.
//

#include <iostream>
#include <cstring>
#include "BoardView.h"

BoardView::BoardView(SnakeLogic &board) : board(board) {

    rectangle_field = sf::RectangleShape(sf::Vector2f(20, 20));
    rectangle_field.setFillColor(sf::Color(221, 160, 221));
    rectangle_field.setOutlineThickness(1);
    rectangle_field.setOutlineColor(sf::Color(30, 30, 30));

    rectangle_Wall = sf::RectangleShape(sf::Vector2f(20, 20));
    rectangle_Wall.setFillColor(sf::Color(129, 50, 200));
    rectangle_Wall.setOutlineThickness(1);
    rectangle_Wall.setOutlineColor(sf::Color(0, 0, 0));

    rectangle_Snake = sf::RectangleShape(sf::Vector2f(20, 20));
    rectangle_Snake.setFillColor(sf::Color(255, 21, 133));
    rectangle_Snake.setOutlineThickness(1);
    rectangle_Snake.setOutlineColor(sf::Color(0, 0, 0));

    rectangle_Fruit = sf::RectangleShape(sf::Vector2f(20, 20));
    rectangle_Fruit.setFillColor(sf::Color(200, 0, 0));
    rectangle_Fruit.setOutlineThickness(1);
    rectangle_Fruit.setOutlineColor(sf::Color(0, 0, 0));


    font.loadFromFile("8-bit.ttf");

    if (!font.loadFromFile("8-bit.ttf")) {
        std::cerr << strerror(errno) << std::endl;
        abort();
    }


    text.setFont(font);
    text.setString("Snake");
    text.setCharacterSize(160);
    text.setPosition(200, 40);

    GameEnd.setFont(font);
    GameEnd.setFillColor(sf::Color::Black);
    GameEnd.setString("GAME OVER");
    GameEnd.setCharacterSize(100);
    GameEnd.setPosition(180, 0);

    hint.setFont(font);
    hint.setFillColor(sf::Color::Black);
    hint.setString("        Press ESC Main menu \n To play again restart program");
    hint.setCharacterSize(35);
    hint.setPosition(150, 200);


}

void BoardView::DrawOnBoard(sf::RenderWindow &win) {
    for (int i = 0; i < board.getBoardWidth(); i += 1) {
        for (int g = 0; g < board.getBoardHeight(); g += 1) {

            if (info(g, i) == 1) {
                rectangle_Wall.setPosition(i * 20 + 100, g * 20 + 300);
                win.draw(rectangle_Wall);
            } else if (info(g, i) == 2) {
                rectangle_Snake.setPosition(i * 20 + 100, g * 20 + 300);
                win.draw(rectangle_Snake);
            } else if (info(g, i) == 3) {
                rectangle_Fruit.setPosition(i * 20 + 100, g * 20 + 300);
                win.draw(rectangle_Fruit);
            } else {
                rectangle_field.setPosition(i * 20 + 100, g * 20 + 300);
                win.draw(rectangle_field);

            }
        }
    }
    win.draw(text);

    if (board.Gameended()) {
        win.draw(hint);
        win.draw(GameEnd);
    }
}

int BoardView::info(int x, int y) {
    return board.getFieldinfo(x, y);
}




