//
// Created by bartosz on 27.03.2020.
//

#include "Paddle.h"

Paddle::Paddle(Side side, float speed) {
    this->side = side;
    this->speed = speed;

    // Create the paddle shape
    shape = sf::RectangleShape(sf::Vector2f(10.0f, 50.0f));
    shape.setFillColor(sf::Color::White);

    sf::Vector2f pos;
    if (side == Side::LEFT) {
        pos = {10.0f, 300.0f};
    }
    else {
        pos = {700.0f, 300.0f};
    }

    shape.setPosition(pos);
}

void Paddle::move(Direction dir) {
    sf::Vector2f pos = shape.getPosition();

    if (dir == Direction::UP) {
        pos.y -= speed;
    }
    if (dir == Direction::DOWN) {
        pos.y += speed;
    }

    shape.setPosition(pos);
}

sf::RectangleShape* Paddle::getDrawable() {
    return &shape;
}
