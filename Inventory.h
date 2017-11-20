#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include <string>

#include "Item.h"

class Inventory {
private:
	// Vars
	std::vector<Item> itemList;
	double totalWeight;
	double totalValue;

	// Functions
	void CalculateInventory();
public:
	Inventory();

	// Functions
	void AddItem(Item item);
	void AddItem(std::string name, double weight, double value);
	void AddItem(int itemType, std::string name, double weight, double value, int dd);
	void RemoveItemByName(std::string name);
	void PrintItems();

	// Getters
	double GetTotalWeight();
	double GetTotalValue();
	int GetItemCount();

	// Setters

};

#endif
