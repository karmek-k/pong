//
// Created by bartosz on 26.03.2020.
//

#ifndef PONG_GAMEOBJECT_H
#define PONG_GAMEOBJECT_H

#include <SFML/Graphics.hpp>

#include "constants.h"

class GameObject {
public:
  virtual sf::Drawable *getDrawable() = 0;
  virtual void move(Direction) = 0;
};

#endif // PONG_GAMEOBJECT_H
