//
// Created by bartosz on 26.03.2020.
//

#ifndef PONG_GAMEOBJECT_H
#define PONG_GAMEOBJECT_H

#include <SFML/Graphics.hpp>

class GameObject {
    sf::Vector2f pos;
public:
    virtual sf::Drawable* getDrawable() = 0;
};


#endif //PONG_GAMEOBJECT_H
