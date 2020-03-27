//
// Created by bartosz on 27.03.2020.
//

#include "Paddle.h"
#include "constants.h"

Paddle::Paddle(Side side) {
    this->side = side;

    // Create the paddle shape
    shape = sf::RectangleShape(sf::Vector2f(PADDLE_WIDTH, PADDLE_HEIGHT));
    shape.setFillColor(sf::Color::White);
    shape.setOrigin(sf::Vector2f(PADDLE_WIDTH / 2.0, PADDLE_HEIGHT / 2.0));

    sf::Vector2f pos;
    if (side == Side::LEFT) {
        pos = {PADDLE_DISTANCE_FROM_EDGE, DEFAULT_HEIGHT / 2.0};
    }
    else {
        pos = {DEFAULT_WIDTH - PADDLE_DISTANCE_FROM_EDGE, DEFAULT_HEIGHT / 2.0};
    }

    shape.setPosition(pos);
}

void Paddle::move(Direction dir) {
    sf::Vector2f pos = shape.getPosition();

    if (dir == Direction::UP) {
        pos.y -= PADDLE_SPEED;
    }
    if (dir == Direction::DOWN) {
        pos.y += PADDLE_SPEED;
    }

    shape.setPosition(pos);
}

sf::RectangleShape* Paddle::getDrawable() {
    return &shape;
}
