//
// Created by bartosz on 27.03.2020.
//

#ifndef PONG_PADDLE_H
#define PONG_PADDLE_H

#include <SFML/Graphics.hpp>
#include "GameObject.h"

enum class Side { LEFT, RIGHT };
enum class Direction { UP, DOWN };

class Paddle : public GameObject {
    float speed;
    Side side;
    sf::RectangleShape shape;
public:
    Paddle(Side side, float speed);
    void move(Direction dir);
    sf::RectangleShape* getDrawable() override;
};


#endif //PONG_PADDLE_H
