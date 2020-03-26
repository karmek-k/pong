#include <iostream>
#include <cstdlib>

#include "Game.h"

constexpr unsigned DEFAULT_WIDTH = 800u, DEFAULT_HEIGHT = 600u;

int main(int args, char* argv[]) {
    unsigned width = DEFAULT_WIDTH, height = DEFAULT_HEIGHT;

    // read window size from argv
    if (args >= 3) {
        try {
            width = std::stoi(argv[1]);
            height = std::stoi(argv[2]);
        }
        catch (std::invalid_argument& e) {
            std::cerr << "Invalid arguments specified!\n";
            std::exit(1);
        }
    }

    Game(width, height);

    return 0;
}
