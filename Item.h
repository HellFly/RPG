#ifndef ITEM_H
#define ITEM_H

#include <string>

enum ItemType{ITEM = 0, WEAPON, ARMOR};

class Item {
private:
	// Vars
	int itemType;
	std::string name;
	double weight;
	double value;

	int maxDamage;
	int defence;

	// Functions
public:
	Item();
	Item(std::string name, double weight, double value);
	Item(int itemType, std::string name, double weight, double value, int dd);

	// Functions
	void Create(std::string name, double weight, double value);
	void Create(int itemType, std::string name, double weight, double value, int dd);
	int GetDamage();
	bool IsItem();
	bool IsWeapon();
	bool IsArmor();
	void PrintItem();

	// Getters
	int GetType();
	std::string GetName();
	double GetWeight();
	double GetValue();
	int GetDefence();

	// Setters
};

#endif
