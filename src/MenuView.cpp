//
// Created by Gus on 27.04.2020.
//

#include <iostream>
#include <cstring>
#include "MenuView.h"

MenuView::MenuView(SnakeLogic &board) : board(board) {

    font.loadFromFile("8-bit.ttf");
    if (!font.loadFromFile("8-bit.ttf")) {
        std::cerr << strerror(errno) << std::endl;
        abort();
    }


    menu[0].setFont(font);
    menu[0].setString("PLAY");
    menu[0].setCharacterSize(140);
    menu[0].setPosition(260, 140);

    menu[1].setFont(font);
    menu[1].setString("TOP SCORE");
    menu[1].setCharacterSize(140);
    menu[1].setPosition(100, 240);

    menu[2].setFont(font);
    menu[2].setString("EXIT");
    menu[2].setCharacterSize(140);
    menu[2].setPosition(280, 340);

    hint2.setFont(font);
    hint2.setString("Use arrows to navigate in menu\n          ENTER TO CONFIRM");
    hint2.setCharacterSize(50);
    hint2.setPosition(60, 650);
    hint2.setFillColor(sf::Color::Black);

    hint3.setFont(font);
    hint3.setString("To play use WSAD");
    hint3.setCharacterSize(50);
    hint3.setPosition(220, 600);
    hint3.setFillColor(sf::Color::Black);

    Selected = 0;

}

void MenuView::DrawMenu(sf::RenderWindow &win) {
    for (int i = 0; i < 3; i++) { win.draw(menu[i]); }
    win.draw(hint2);
    win.draw(hint3);
}

void MenuView::moveUP() {
    if (Selected - 1 >= -1) {
        menu[Selected].setFillColor(sf::Color::White);
        Selected--;
        if (Selected == -1) { Selected = 2; }
        menu[Selected].setFillColor(sf::Color::Black);
    }

}

void MenuView::moveDown() {
    if (Selected + 1 <= 3) {
        menu[Selected].setFillColor(sf::Color::White);
        Selected++;
        if (Selected == 3) { Selected = 0; }
        menu[Selected].setFillColor(sf::Color::Black);
    }
}

int MenuView::GetSelected() const {
    return Selected;
}
