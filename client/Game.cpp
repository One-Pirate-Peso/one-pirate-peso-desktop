#include "Game.h"

Game::Game()
    : window(sf::VideoMode(800, 600), "One Pirate Peso") {
    shipTexture.loadFromFile("/Users/martin/Desktop/my projects/one-pirate-peso-desktop/assets/ship.jpg");
    ship.setTexture(shipTexture);
    ship.setPosition(400, 300);
}

void Game::run() {
    while (window.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        ship.move(-2.f, 0);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        ship.move(2.f, 0);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        ship.move(0, -2.f);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        ship.move(0, 2.f);
}

void Game::update() {
    // Логика игры
}

void Game::render() {
    window.clear();
    window.draw(ship);
    window.display();
}
