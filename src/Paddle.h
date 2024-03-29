//
// Created by bartosz on 27.03.2020.
//

#ifndef PONG_PADDLE_H
#define PONG_PADDLE_H

#include <SFML/Graphics.hpp>

#include "GameObject.h"
#include "constants.h"

class Paddle : public GameObject {
  Side side;
  sf::RectangleShape shape;

public:
  explicit Paddle(Side side);
  void move(Direction dir) override;
  sf::RectangleShape *getDrawable() override;
};

#endif // PONG_PADDLE_H
