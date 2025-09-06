#include "../include/Game.hpp"

Game::Game() : 
		window( sf::VideoMode(1000, 800), "Space wars" ),
		background("../assets/images/background-1.jpg", errorsMessages),
		player("../assets/images/vaisseau-spatial.png", errorsMessages)
	{
	badGuys.emplace_back("../assets/images/badGuy.png", errorsMessages);
	fireballs.emplace_back("../assets/images/fireball-flame-ball.gif",errorsMessages);
	window.setFramerateLimit(60);
}

void Game::run() {
	while (window.isOpen()) {
		processEvents();
		update();
		render();
		logErrorsMessages();
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
	player.handleInput(windowSize);
}

void Game::update() {
	windowSize = window.getSize();
	if (clock.getElapsedTime().asSeconds() >= 3.f) {
		badGuys.emplace_back("../assets/images/badGuy.png", errorsMessages);
		clock.restart();
	}
}

void Game::render() {
	/**
	 *  - Render all sprites  
	 */
	window.clear();

	background.drawOn(window, windowSize);
	for (BadGuy& badGuy : badGuys ) {
		badGuy.drawOn(window);
	}
	player.drawOn(window);
	for (Fireball& fireball : fireballs) {
		fireball.drawOn(window);
	}
	window.display();
}
void Game::logErrorsMessages() {
	/**
	 * - Open the log file ../log/game.log on append mode
	 * - Write all errors encounter during the execution of the program in it if there's any.
	 */
	if(!errorsMessages.empty()) {
		logFile.open("../log/game.log", std::ios::app);
		if(!logFile.is_open()) 
			std::runtime_error("src/Game.cpp:50 -> Unable to open the log file !");
		for(std::string& errorMessage : errorsMessages) {
			logFile << errorMessage << std::endl;
		}
		errorsMessages.clear();
	}

}