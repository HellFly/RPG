#include <iostream>
#include <string>

#include "Area.h"

Area::Area(int id, std::string description) {
	this->id = id;
	this->description = description;
}

// Private Functions

// Public Functions

// Getters
std::string Area::GetDescription() {
	return this->description;
}

// Setters
