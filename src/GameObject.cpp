//
// Created by bartosz on 26.03.2020.
//

#include "GameObject.h"

void GameObject::setPos(sf::Vector2f pos) {
    this->pos = pos;
}

sf::Vector2f GameObject::getPos() {
    return this->pos;
}