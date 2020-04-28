//
// Created by Gus on 27.04.2020.
//

#ifndef SNAKE_MW_CZ15_253048_MENUVIEW_H
#define SNAKE_MW_CZ15_253048_MENUVIEW_H

#include "SnakeLogic.h"
#include <SFML/Graphics.hpp>


class MenuView {
    sf::Text menu[3];
    sf::Text hint3;
    sf::Text hint2;
    sf::Font font;
    int Selected;
public:
    explicit MenuView(SnakeLogic &board);

    void DrawMenu(sf::RenderWindow &win);

    void moveUP();

    void moveDown();

    int GetSelected() const;

private:
    SnakeLogic &board;

};


#endif //SNAKE_MW_CZ15_253048_MENUVIEW_H
