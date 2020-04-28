//
// Created by Gus on 24.04.2020.
//

#ifndef SNAKE_MW_CZ15_253048_SNAKEDRAWING_H
#define SNAKE_MW_CZ15_253048_SNAKEDRAWING_H

#include "SnakeLogic.h"
#include"BoardView.h"
#include <SFML/Graphics.hpp>

class snakeDrawing {
public:
    explicit snakeDrawing(SnakeLogic &board);

    void playing();

    int page = 3;


private:
    SnakeLogic &board;

};


#endif //SNAKE_MW_CZ15_253048_SNAKEDRAWING_H
