//
// Created by bartosz on 26.03.2020.
//

#ifndef PONG_GAME_H
#define PONG_GAME_H

#include <set>

#include <SFML/Graphics.hpp>

#include "GameObject.h"

class Game {
    static void gameLoop(sf::RenderWindow&);
    std::set<GameObject> gameObjects;
public:
    Game(unsigned width, unsigned height);
    //~Game();
};


#endif //PONG_GAME_H
