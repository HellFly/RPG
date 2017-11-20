#include <iostream>
#include <fstream>

#include "File.h"
#include "Area.h"

#define WORLD_DIR "world/"

bool File::Exists(std::string filename) {
	std::fstream file(filename);
	return file.good();
}

Area File::GetArea(int x, int y) {
	std::string filename = WORLD_DIR;
	filename += "area_" + std::to_string(x) + "_" + std::to_string(y) + ".txt";
	if (File::Exists(filename)) {
		std::ifstream file;
		file.open(filename);
		std::string content;
		while (!file.eof()) {
			std::string x;
			std::getline(file, x);
		}
		file.close();
		Area a = Area(1, "New area");
		return a;
	}
	Area a = Area(1, "No area");
	return a;
}
