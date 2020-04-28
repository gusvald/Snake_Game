//
// Created by Gus on 27.04.2020.
//

#ifndef SNAKE_MW_CZ15_253048_RESULTSVIEW_H
#define SNAKE_MW_CZ15_253048_RESULTSVIEW_H
#include "SnakeLogic.h"
#include <SFML/Graphics.hpp>

class ResultsView {
    sf::Text score[10];
    sf::Font font;
    int score_int[10];
    std::string score_string[10];
public:
    explicit ResultsView(SnakeLogic &board);
    void DrawResults(sf::RenderWindow & win );
    void LoadResults();
private:
    SnakeLogic &board;


};


#endif //SNAKE_MW_CZ15_253048_RESULTSVIEW_H
