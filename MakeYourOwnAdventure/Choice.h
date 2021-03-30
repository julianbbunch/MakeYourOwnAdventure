#pragma once

#include <iostream>
#include "Thing.h"

class Choice {
public:
	Choice();

	void print(std::ostream& rcOut);

private:
	std::vector<Thing> mcThings;
};