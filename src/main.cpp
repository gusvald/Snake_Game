#include "SnakeLogic.h"
#include "snakeDrawing.h"
#include <ctime>
#include <cstdlib>


int main() {
    srand(time(nullptr));
    SnakeLogic board(30, 20, HARD);
    snakeDrawing view(board);
    view.playing();

    return 0;
}
