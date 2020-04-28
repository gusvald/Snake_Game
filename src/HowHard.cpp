//
// Created by Gus on 27.04.2020.
//

#include <iostream>
#include <cstring>
#include "HowHard.h"

HowHard::HowHard(SnakeLogic &board) : board(board) {

    font.loadFromFile("8-bit.ttf");
    if (!font.loadFromFile("8-bit.ttf")) {
        std::cerr << strerror(errno) << std::endl;
        abort();
    }


    menuv2[0].setFont(font);
    menuv2[0].setString("EASY");
    menuv2[0].setCharacterSize(140);
    menuv2[0].setPosition(260, 40);

    menuv2[1].setFont(font);
    menuv2[1].setString("NORMAL");
    menuv2[1].setCharacterSize(140);
    menuv2[1].setPosition(200, 240);

    menuv2[2].setFont(font);
    menuv2[2].setString("HARD");
    menuv2[2].setCharacterSize(140);
    menuv2[2].setPosition(260, 440);

    Selectedv2 = 0;
}

void HowHard::DrawDif(sf::RenderWindow &win) {
    for (int i = 0; i < 3; i++) { win.draw(menuv2[i]); }
}

void HowHard::moveUP() {
    if (Selectedv2 - 1 >= -1) {
        menuv2[Selectedv2].setFillColor(sf::Color::White);
        Selectedv2--;
        if (Selectedv2 == -1) { Selectedv2 = 2; }
        menuv2[Selectedv2].setFillColor(sf::Color::Black);
    }
}

void HowHard::moveDown() {
    if (Selectedv2 + 1 <= 3) {
        menuv2[Selectedv2].setFillColor(sf::Color::White);
        Selectedv2++;
        if (Selectedv2 == 3) { Selectedv2 = 0; }
        menuv2[Selectedv2].setFillColor(sf::Color::Black);
    }
}

int HowHard::GetSelectedDif() const {
    return Selectedv2;
}
