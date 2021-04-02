#pragma once

#include <iostream>
#include "Thing.h"

class Choice {
public:
	Choice();

	void print(std::ostream& rcOut);
	void fds();

private:
	std::vector<Thing> mcThings;
	std::string mcText;
};