#include <iostream>
#include <vector>
#include <string>

#include "Inventory.h"
#include "Item.h"

Inventory::Inventory() {
	this->totalWeight = 0.0;
	this->totalValue = 0.0;
}

// Private Functions
void Inventory::CalculateInventory() {
	double weight = 0.0;
	double value = 0.0;
	for (auto i = this->itemList.begin(); i != this->itemList.end(); i++) {
		Item item = *i;
		weight += item.GetWeight();
		value += item.GetValue();
	}
	this->totalWeight = weight;
	this->totalValue = value;
}

// Public functions
void Inventory::AddItem(Item item) {
	this->itemList.push_back(item);
	this->CalculateInventory();
}

void Inventory::AddItem(std::string name, double weight, double value) {
	Item item = Item(name, weight, value);
	this->itemList.push_back(item);
	this->CalculateInventory();
}

void Inventory::AddItem(int itemType, std::string name, double weight, double value, int dd) {
	Item item = Item(itemType, name, weight, value, dd);
	this->itemList.push_back(item);
	this->CalculateInventory();
}

void Inventory::RemoveItemByName(std::string name) {
	for (auto i = this->itemList.begin(); i != this->itemList.end(); i++) {
		Item item = *i;
		if (item.GetName() == name) {
			this->totalWeight -= item.GetWeight();
			this->itemList.erase(i);
			this->CalculateInventory();
			return;
		}
	}
}

void Inventory::PrintItems() {
	if (this->itemList.size() > 0) {
		for (auto i = this->itemList.begin(); i != this->itemList.end(); i++) {
			Item item = *i;
			item.PrintItem();
		}
	}
	else {
		std::cout << "Inventory is empty" << std::endl;
	}
}

// Getters
double Inventory::GetTotalWeight() {
	return this->totalWeight;
}

double Inventory::GetTotalValue() {
	return this->totalValue;
}

int Inventory::GetItemCount() {
	return this->itemList.size();
}

// Setters
