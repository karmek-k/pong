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
    Paddle leftPaddle(Side::LEFT);
    Paddle rightPaddle(Side::RIGHT);

    // set up gameObjects
    gameObjects["leftPaddle"] = &leftPaddle;
    gameObjects["rightPaddle"] = &rightPaddle;

    gameLoop(window);
}


void Game::handleKeyPress(sf::Keyboard::Key& key) {
    // left paddle
    /*
    if (key == sf::Keyboard::W) {
        gameObjects.
    }
    */
}

void Game::gameLoop(sf::RenderWindow& window) {
    // main loop
    while (window.isOpen()) {
        // event handling
        sf::Event e {};
        while (window.pollEvent(e)) {
            // handle window closing
            if (e.type == sf::Event::Closed) {
                window.close();
            }

            // handle hey presses
            if (e.type == sf::Event::KeyPressed) {
                handleKeyPress(e.key.code);
            }
        }

        // rendering
        window.clear(sf::Color::Black);
        for (auto obj : gameObjects) { // obj type: pair<const char*, GameObject*>
            window.draw(*obj.second->getDrawable());
        }
        window.display();
    }
}