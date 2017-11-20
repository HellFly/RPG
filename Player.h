#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "Item.h"
#include "Inventory.h"

class Player {
private:
	// Vars
	std::string name;
	int level;
	int age;
	Inventory inventory;
	double money;

	int hp;
	int maxHp;
	int xp;
	int xpToLevel;

	int stat_agi;
	int stat_cha;
	int stat_int;
	int stat_lck;
	int stat_sta;
	int stat_str;
	int stat_wis;

	// Functions
	int GetXpToLevel();
	void LevelUp();
public:
	Player();

	// Functions
	void Create();
	void Load(std::string savename);
	void AddXp(int xp);
	void AddItem(Item item);
	void Print();
	void PrintInventory();

	// Getters
	std::string GetName();

	// Setters
};

#endif
