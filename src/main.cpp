#include "MinesweeperBoard.hpp"
#include <iostream>
#include <ctime>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include "SFMLWindow.hpp"
#include "SFMLController.hpp"


int main() {
    srand( time(nullptr) );

    MinesweeperBoard Board (10, 10, GameMode::HARD);

    sf::RenderWindow win(sf::VideoMode(600, 600), "Saper");

    win.setFramerateLimit(60);

    SFMLWindow v1 (Board,win);
    SFMLController ctrl(Board,v1);

    while (win.isOpen()) {

        sf::Event event;

        while (win.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                win.close();
            }
             ctrl.handleEvent(event);
        }
        v1.Display();
    }

    return 0;
}
/*
set(BINARY ${CMAKE_PROJECT_NAME})

set(SFML_PATH "C:/app/SFML-2.5.1" ${CMAKE_MODULE_PATH})
set(SFML_DIR ${SFML_PATH}/lib/cmake/SFML)

find_package(SFML 2.5.1 COMPONENTS window graphics audio REQUIRED)


file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.hpp *.cpp)

set(SOURCES ${SOURCES})

set(CMAKE_CXX_FLAGS "-Wall -Wextra -static -static-libstdc++")

add_executable(${BINARY}_run ${SOURCES})
add_library(${BINARY}_lib STATIC ${SOURCES})
target_link_libraries(${BINARY}_run sfml-system sfml-window sfml-graphics sfml-audio)
*/
/*
cmake_minimum_required(VERSION 3.1)
# Proszę zmienić wymaganą wersję CMake na niższą - w zupełności wystarczy 3.1

project(snake_MW_CZ15_253048)

set(CMAKE_CXX_STANDARD 14)
add_compile_options(-Wall -Wextra)

# ustawienia SFML-a dla Linuksa/MacOS i Windows - proszę zostawić obie konfiguracje,
# CMake automatycznie użyje właściwej
if (UNIX)
    # proszę nie modyfkować pierwszego wpisu, można dopisać kolejne katalogi
    # pierwszy wpis powinien poprawnie skonfigurować SFML-a dla wszystkich
    # Debianopodobnych dystrybucji
    set ( CMAKE_MODULES_PATH "/usr/share/SFML/cmake/Modules" ${CMAKE_MODULE_PATH})

    # czy ktoś używa MacOS ? Co tam trzeba wpisać ?

endif(UNIX)

if (WIN32)
    # próbujemy linkować statycznie (nie trzeba kopiować plików dll do katalogu projektu)
    set( SFML_STATIC_LIBRARIES TRUE )

    # można zmienić katalog na właściwy
    set ( SFML_DIR "C:/app/SFML-2.5.1/lib/cmake/SFML/")
endif(WIN32)


# to polecenie się wywali, jeśli CMake nie znajdzie SFML-a w jednym ze wskazanych
# wcześniej katalogów - nie ma potrzeby robienia potem if-a dla target_link_libraries
find_package(SFML 2 COMPONENTS graphics audio REQUIRED)

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.hpp *.cpp)

add_executable(MyApp main.cpp)

target_link_libraries(MyApp sfml-graphics sfml-audio)

# ABSOLUTNIE I W ŻADNYM WYPADKU nie dodawać wpisu include_directories(${SFML_PATH}/include/SFML/) !!!
# po pierwsze - nie jest potrzebny, po drugie - "dzięki" takim wpisom utrudniacie mi życie
# W kodzie w dyrektywach #include należy obowiązkowo używać konwencji #include <SFML/...>
 */