//
// Created by bartosz on 26.03.2020.
//

#ifndef PONG_GAME_H
#define PONG_GAME_H

#include <SFML/Graphics.hpp>

class Game {
    static void game_loop(sf::RenderWindow&);
public:
    Game(unsigned width, unsigned height);
    //~Game();
};


#endif //PONG_GAME_H
