#include "../include/Game.hpp"

Game::Game() : 
			window(sf::VideoMode(800, 600), "Space war"), 
			player("../assets/images/vaisseau-spatial.png")
	{
	window.setFramerateLimit(60);
	badGuys.push_back(BadGuy("../assets/images/badGuy.png"));
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
	}
	
	player.handleInput();
	
	
}

void Game::update() {
	// logique du jeu
}

void Game::render() {
	window.clear(sf::Color::Black);
	player.drawOn(window);
	for (auto& badGuy : badGuys ) {
		badGuy.drawOn(window);
	}
	window.display();
}
