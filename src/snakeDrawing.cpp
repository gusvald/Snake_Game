//
// Created by Gus on 24.04.2020.
//

#include <iostream>
#include "snakeDrawing.h"
#include "MenuView.h"
#include "ResultsView.h"
#include "HowHard.h"

snakeDrawing::snakeDrawing(SnakeLogic &board) : board(board) {
}

void snakeDrawing::playing() {
    constexpr int width = 800;
    constexpr int height = 800;

    BoardView view(board);
    MenuView menu(board);
    ResultsView result(board);
    HowHard choose(board);


    sf::Clock clk;

    //page 0 play
    //page 1 results
    //page 2 exit
    //page 3 menu
    //page 4 gamemode
    //page 5 endgame screen


    while (true) {
        if (page == 3) {
            sf::RenderWindow win(sf::VideoMode(width, height), "Snake");
            win.setActive(true);
            win.setKeyRepeatEnabled(false);
            win.setVerticalSyncEnabled(true);

            while (win.isOpen()) {
                sf::Event event{};

                while (win.pollEvent(event)) {
                    if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Up) {
                        menu.moveUP();
                    }

                    if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Down) {
                        menu.moveDown();
                    }

                    if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Return) {

                        if (menu.GetSelected() == 0) {
                            win.close();
                            page = 4;
                        }

                        if (menu.GetSelected() == 1) {
                            board.LoadScore();
                            board.sort();
                            board.SafeScore();
                            result.LoadResults();
                            win.close();
                            page = 1;
                        }

                        if (menu.GetSelected() == 2) {
                            win.close();
                            page = 2;
                        }
                    }

                }


                win.clear(sf::Color(221, 160, 221));
                menu.DrawMenu(win);
                win.display();
            }
        }

        if (page == 0) {
            sf::RenderWindow win_play(sf::VideoMode(width, height), "Snake");
            win_play.setActive(true);
            win_play.setKeyRepeatEnabled(false);
            win_play.setVerticalSyncEnabled(true);

            while (win_play.isOpen()) {
                sf::Event event{};
                while (win_play.pollEvent(event)) {
                    if (event.type == sf::Event::Closed ||
                        (sf::Keyboard::isKeyPressed((sf::Keyboard::Escape)))) {
                        page = 3;
                        win_play.close();
                        break;
                    }
                    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::W) {
                        board.turnup();
                    }

                    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::S) {
                        board.turndown();
                    }

                    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::A) {
                        board.turnleft();
                    }

                    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::D) {
                        board.turnright();
                    }

                }

                if (clk.getElapsedTime().asSeconds() > 0.2) {
                    if (!board.Gameended()) {
                        board.update();
                        clk.restart();
                    }
                }


                win_play.clear(sf::Color(221, 160, 221));
                view.DrawOnBoard(win_play);
                win_play.display();
            }

        }


        if (page == 1) {

            sf::RenderWindow win_result(sf::VideoMode(width, height), "Best Scores");
            win_result.setActive(true);
            win_result.setKeyRepeatEnabled(false);
            win_result.setVerticalSyncEnabled(true);

            while (win_result.isOpen()) {


                sf::Event event{};
                while (win_result.pollEvent(event)) {
                    if (event.type == sf::Event::Closed ||
                        (sf::Keyboard::isKeyPressed((sf::Keyboard::Escape)))) {
                        page = 3;
                        win_result.close();
                        break;
                    }
                }

                win_result.clear(sf::Color(221, 160, 221));
                result.DrawResults(win_result);
                win_result.display();
            }
        }

        //here new pages
        if (page == 4) {
            sf::RenderWindow chos(sf::VideoMode(width, height), "Snake");
            chos.setActive(true);
            chos.setKeyRepeatEnabled(false);
            chos.setVerticalSyncEnabled(true);

            while (chos.isOpen()) {
                sf::Event event{};

                while (chos.pollEvent(event)) {
                    if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Up) {
                        choose.moveUP();
                    }

                    if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Down) {
                        choose.moveDown();
                    }

                    if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Return) {

                        if (choose.GetSelectedDif() == 0) {
                            board.changeDifEas();
                            chos.close();
                            page = 0;
                        }

                        if (choose.GetSelectedDif() == 1) {
                            board.changeDifNor();
                            chos.close();
                            page = 0;
                        }

                        if (choose.GetSelectedDif() == 2) {
                            board.changeDifHar();
                            chos.close();
                            page = 0;
                        }
                    }

                }

                chos.clear(sf::Color(221, 160, 221));
                choose.DrawDif(chos);
                chos.display();
            }
        }

        if (page == 2)
            return;
    }
}



