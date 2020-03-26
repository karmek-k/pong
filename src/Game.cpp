//
// Created by bartosz on 26.03.2020.
//

#include <SFML/Graphics.hpp>

#include "Game.h"

Game::Game(unsigned width, unsigned height) {
    // create the window
    sf::RenderWindow window(sf::VideoMode(width, height), "Pong");
    game_loop(window);
}

void Game::game_loop(sf::RenderWindow& window) {
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
        window.display();
    }
}