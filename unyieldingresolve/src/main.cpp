#include <iostream>
#include "Game.h"

int main() {
    Game game;

    while (game.isRunning()) {
        game.processInput();
        game.update();
        game.render();
    }

    return 0;
}