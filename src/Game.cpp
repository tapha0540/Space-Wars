#include "../include/Game.hpp"

Game::Game() : 
			window( sf::VideoMode(800, 600), "Space wars" ),
			player("../assets/images/vaisseau-spatial.png", errorsMessages)
	{
	badGuys.emplace_back("../assets/images/badGuy.png", errorsMessages);
	window.setFramerateLimit(60);
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
		if (event.type == sf::Event::Closed) {
			window.close();
		}
		if (event.type == sf::Event::Resized) {
			sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
			window.setView(sf::View(visibleArea));
		}
	}
	
	player.handleInput(window);
	
}

void Game::update() {
	// logique du jeu

}

void Game::render() {
	window.clear(sf::Color::Black);
	player.drawOn(window);
	for (BadGuy& badGuy : badGuys ) {
		badGuy.drawOn(window);
	}
	window.display();
}
