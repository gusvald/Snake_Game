//
// Created by Gus on 27.04.2020.
//

#include <iostream>
#include <cstring>
#include "ResultsView.h"

ResultsView::ResultsView(SnakeLogic &board) : board(board) {

    font.loadFromFile("8-bit.ttf");
    if (!font.loadFromFile("8-bit.ttf")) {
        std::cerr << strerror(errno) << std::endl;
        abort();
    }

    for (int i = 0; i < 10; i++) {
        score[i].setFont(font);
        score[i].setString(score_string[i]);
        score[i].setCharacterSize(100);
        score[i].setPosition(320, i * 70);
        LoadResults();
    }
}

void ResultsView::DrawResults(sf::RenderWindow &win) {
    for (int i = 0; i < 10; i++) { win.draw(score[i]); }
}

void ResultsView::LoadResults() {
    std::fstream file;
    file.open("Score.txt", std::ios::in);
    if (file.good()) {

        std::string line;

        for (int i = 0; i < 10; i++) {
            getline(file, line);
            score_int[i] = atoi(line.c_str());
        }
    }
    file.close();

    for (int i = 0; i < 10; i++) {

        score_string[i] = std::to_string(score_int[i]);
    }
}


