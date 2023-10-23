//
// Created by bartosz on 26.03.2020.
//

#ifndef PONG_GAME_H
#define PONG_GAME_H

#include <map>

#include <SFML/Graphics.hpp>

#include "GameObject.h"

class Game {
  void gameLoop(sf::RenderWindow &);
  void handleKeyPress();

  std::map<const char *, GameObject *> gameObjects;

public:
  Game(unsigned width, unsigned height);
  //~Game();
};

#endif // PONG_GAME_H
