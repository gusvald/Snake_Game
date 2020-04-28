//
// Created by Gus on 27.04.2020.
//

#ifndef SNAKE_MW_CZ15_253048_HOWHARD_H
#define SNAKE_MW_CZ15_253048_HOWHARD_H

#include "SnakeLogic.h"
#include <SFML/Graphics.hpp>

class HowHard {

    sf::Text menuv2[3];
    sf::Font font;
    int Selectedv2;
public:
    explicit HowHard(SnakeLogic &board);

    void DrawDif(sf::RenderWindow &win);

    void moveUP();

    void moveDown();

    int GetSelectedDif() const;

private:
    SnakeLogic &board;

};


#endif //SNAKE_MW_CZ15_253048_HOWHARD_H
