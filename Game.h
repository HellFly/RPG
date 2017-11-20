#ifndef GAME_H
#define GAME_H

#include "Player.h"

class Game {
private:
	// Vars
	bool running;
	Player player;

	// Functions
	void Step();
	void Menu();
	void LoadGame();
	void NewGame();
	void InitWorld();
public:
	Game();

	// Functions
	void Start();
};

#endif
