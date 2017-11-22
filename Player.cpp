#include <iostream>
#include <string>

#include "Player.h"
#include "Item.h"
#include "Inventory.h"

Player::Player() {
	this->name = "";
	this->level = 1;
	this->age = 20;
	this->inventory = Inventory();
	this->money = 0.0;

	this->hp = 10;
	this->maxHp = 10;
	this->xp = 0;
	this->xpToLevel = 100;

	/*this->stats = new int[sizeof(PlayerStat)];

	for (unsigned int i = 0; i < sizeof(PlayerStat); i++) {
		this->stats[i] = 0;
	}*/

	this->stat_agi = 10;
	this->stat_cha = 10;
	this->stat_int = 10;
	this->stat_lck = 10;
	this->stat_sta = 10;
	this->stat_str = 10;
	this->stat_wis = 10;
}

// Private functions
int Player::GetXpToLevel() {
	return this->level * 100;
}

void Player::LevelUp() {

}

// Public functions
void Player::Create() {
	std::cout << "Creating a new character" << std::endl;
	std::cout << "Name for your character: ";
	std::getline(std::cin, this->name);
}

void Player::Load(std::string savename) {

}

void Player::AddXp(int xp) {
	this->xp += xp;
	if (this->xp >= this->GetXpToLevel()) {
		this->xp -= this->GetXpToLevel();
		this->LevelUp();
	}
}

void Player::AddItem(Item item) {
	this->inventory.AddItem(item);
}

void Player::Print() {
	std::cout << "==== Player info ====" << std::endl;
	std::cout << "  Name: " << this->name << std::endl;
	std::cout << "  Age: " << this->age << std::endl;
	std::cout << "  Level: " << this->level << std::endl;
	std::cout << "  XP: " << this->xp << " / " << this->GetXpToLevel() << std::endl;
	std::cout << "  HP: " << this->hp << " / " << this->maxHp << std::endl;
	std::cout << "=====================" << std::endl;
	std::cout << std::endl;
}

void Player::PrintInventory() {
	std::cout << "==== Inventory ====" << std::endl;
	std::cout << "Money: " << this->money << std::endl;
	this->inventory.PrintItems();
	std::cout << "===================" << std::endl;
	std::cout << std::endl;
}

// Getters
std::string Player::GetName() {
	return this->name;
}

// Setters
