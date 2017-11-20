#ifndef FILE_H
#define FILE_H

#include <string>

#include "Area.h"

namespace File {
	bool Exists(std::string filename);
	Area GetArea(int x, int y);
}

#endif
