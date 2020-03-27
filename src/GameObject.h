//
// Created by bartosz on 26.03.2020.
//

#ifndef PONG_GAMEOBJECT_H
#define PONG_GAMEOBJECT_H

#include <SFML/Graphics.hpp>

class GameObject {
    sf::Vector2f pos;
    std::string name;
public:
    virtual void setPos(sf::Vector2f pos);
    virtual sf::Vector2f getPos();
};


#endif //PONG_GAMEOBJECT_H
