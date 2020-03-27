//
// Created by bartosz on 26.03.2020.
//

#include <SFML/Graphics.hpp>

#include "Game.h"
#include "Paddle.h"

Game::Game(unsigned width, unsigned height) {
    // create the window
    sf::RenderWindow window(sf::VideoMode(width, height), "Pong");

    // create paddles
    constexpr float SPEED = 10.0f;
    Paddle leftPaddle(Side::LEFT, SPEED);
    Paddle rightPaddle(Side::RIGHT, SPEED);

    // set up gameObjects
    gameObjects.insert(&leftPaddle);
    gameObjects.insert(&rightPaddle);

    gameLoop(window);
}

void Game::gameLoop(sf::RenderWindow& window) {
    // main loop
    while (window.isOpen()) {
        // event handling
        sf::Event e {};
        while (window.pollEvent(e)) {
            if (e.type == sf::Event::Closed) {
                window.close();
            }
        }

        // rendering
        window.clear(sf::Color::Black);
        for (GameObject* obj : gameObjects) {
            window.draw(*obj->getDrawable());
        }
        window.display();
    }
}