#include <iostream>
#include <string>

#include "Game.h"
#include "File.h"
#include "Player.h"

Game::Game() {
	this->running = true;
	this->player = Player();
}

// Private functions

void Game::Step() {
	int choice = -1;

	std::cout << "==== Choose an action ====" << std::endl;
	std::cout << "  0: Player info" << std::endl;
	std::cout << "  1: Inventory" << std::endl;
	std::cout << "==========================" << std::endl;
	std::cout << std::endl;
	std::cout << "Choice: ";

	std::cin >> choice;
	std::cin.ignore();

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	if (choice == 0) {
		this->player.Print();
	}
	else if (choice == 1) {
		this->player.PrintInventory();
	}
}

void Game::Menu() {
	int choice = -1;

	std::cout << "|------------------------------|" << std::endl;
	std::cout << "|           Main Menu          |" << std::endl;
	std::cout << "|          0: New Game         |" << std::endl;
	std::cout << "|          1: Load Game        |" << std::endl;
	std::cout << "|          2: Quit             |" << std::endl;
	std::cout << "|------------------------------|" << std::endl;
	std::cout << std::endl;
	std::cout << "Choice: ";

	std::cin >> choice;
	std::cin.ignore();

	if (choice == 0) {
		this->InitWorld();
		this->NewGame();
	}
	else if (choice == 1) {
		this->InitWorld();
		this->LoadGame();
	}
	else if (choice == 2) {
		this->running = false;
	}
	else {
		this->Menu();
	}
}

void Game::NewGame() {
	this->player.Create();

	std::cout << std::endl;
}

void Game::LoadGame() {

}

void Game::InitWorld() {

}

// Public functions

void Game::Start() {
	this->Menu();
	while (this->running) {
		this->Step();
	}
}
