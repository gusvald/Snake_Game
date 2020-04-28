//
// Created by Gus on 25.04.2020.
//

#ifndef SNAKE_MW_CZ15_253048_BOARDVIEW_H
#define SNAKE_MW_CZ15_253048_BOARDVIEW_H

#include "SnakeLogic.h"
#include <SFML/Graphics.hpp>

class BoardView {

    sf::RectangleShape rectangle_field;
    sf::RectangleShape rectangle_Snake;
    sf::RectangleShape rectangle_Fruit;
    sf::RectangleShape rectangle_Wall;
    sf::Text text;
    sf::Text GameEnd;
    sf::Text hint;
    sf::Font font;
public:
    explicit BoardView(SnakeLogic &board);

    int info(int x, int y);

    void DrawOnBoard(sf::RenderWindow &win);

private:
    SnakeLogic &board;
};


#endif //SNAKE_MW_CZ15_253048_BOARDVIEW_H
