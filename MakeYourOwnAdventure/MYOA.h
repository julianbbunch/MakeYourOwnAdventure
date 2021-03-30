#pragma once

#include <iostream>

class MYOA {
public:
	MYOA(std::string path, std::ostream& rcOut);
	bool read();
	void play();

private:
	std::ostream mrcOut;
	std::istream mrcIn;
};