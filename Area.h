#ifndef AREA_H
#define AREA_H

#include <string>

class Area {
private:
	// Vars
	int id;
	std::string description;

	// Functions
public:
	Area(int id, std::string description);

	// Functions

	// Getters
	std::string GetDescription();
	
	// Setters
};

#endif
