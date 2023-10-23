//
// Created by bartosz on 26.03.2020.
//

#include <SFML/Graphics.hpp>

#include "Game.h"
#include "Paddle.h"
#include "constants.h"

Game::Game(unsigned width, unsigned height) {
  // create the window
  sf::RenderWindow window(sf::VideoMode(width, height), "Pong");
  window.setFramerateLimit(60u);

  // create paddles
  Paddle leftPaddle(Side::LEFT);
  Paddle rightPaddle(Side::RIGHT);

  // set up gameObjects
  gameObjects["leftPaddle"] = &leftPaddle;
  gameObjects["rightPaddle"] = &rightPaddle;

  gameLoop(window);
}

void Game::handleKeyPress() {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
    gameObjects["leftPaddle"]->move(Direction::UP);
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
    gameObjects["leftPaddle"]->move(Direction::DOWN);
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up)) {
    gameObjects["rightPaddle"]->move(Direction::UP);
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down)) {
    gameObjects["rightPaddle"]->move(Direction::DOWN);
  }
}

void Game::gameLoop(sf::RenderWindow &window) {
  // main loop
  while (window.isOpen()) {
    // event handling
    sf::Event e{};
    while (window.pollEvent(e)) {
      // handle window closing
      if (e.type == sf::Event::Closed) {
        window.close();
      }

      // handle key presses
      handleKeyPress();
    }

    // rendering
    window.clear(sf::Color::Black);
    for (auto obj : gameObjects) { // obj type: pair<const char*, GameObject*>
      window.draw(*obj.second->getDrawable());
    }
    window.display();
  }
}