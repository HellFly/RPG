#include <iostream>
#include <string>

#include "Item.h"

Item::Item() {
	this->itemType = ItemType::ITEM;
	this->name = "";
	this->weight = 0.0;
	this->value = 0.0;
}

Item::Item(std::string name, double weight, double value) {
	this->name = name;
	this->weight = weight;
	this->value = value;
}

Item::Item(int itemType, std::string name, double weight, double value, int dd) {
	this->itemType = itemType;
	this->name = name;
	this->weight = weight;
	this->value = value;
	this->maxDamage = dd;
	this->defence = dd;
}

// Private Functions

// Public Functions
void Item::Create(std::string name, double weight, double value) {
	this->name = name;
	this->weight = weight;
	this->value = value;
}

void Item::Create(int itemType, std::string name, double weight, double value, int dd) {
	this->itemType = itemType;
	this->name = name;
	this->weight = weight;
	this->value = value;
	this->maxDamage = dd;
	this->defence = dd;
}

int Item::GetDamage() {
	return rand() % this->maxDamage + 1;
}

bool Item::IsItem() {
	return this->itemType == ItemType::ITEM;
}

bool Item::IsWeapon() {
	return this->itemType == ItemType::WEAPON;
}

bool Item::IsArmor() {
	return this->itemType == ItemType::ARMOR;
}

void Item::PrintItem() {
	std::cout << "  Item: " << this->name << ", value: " << this->value << std::endl;
}

// Getters
int Item::GetType() {
	return this->itemType;
}

std::string Item::GetName() {
	return this->name;
}

double Item::GetWeight() {
	return this->weight;
}

double Item::GetValue() {
	return this->value;
}

int Item::GetDefence() {
	return this->defence;
}

// Setters
