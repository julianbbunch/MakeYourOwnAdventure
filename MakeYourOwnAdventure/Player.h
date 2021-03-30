#pragma once

#include <vector>
#include "Thing.h"

class Player {
public: 
	Player();

	void decide();

private:
	std::vector<Thing> mcHolding;
	std::vector<Thing> mcHad;
	std::vector<Thing> mcCantHave;
};