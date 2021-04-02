#pragma once

#include <vector>
#include "Thing.h"
#include "Choice.h"

class Player {
public: 
	Player();

	void decide(std::vector<Choice> cChoices);
	void add(Thing cThing);
	void tryAdd(Thing cThing);
	void mark(Thing cThing);
	void unmark(Thing cThing);


private:
	std::vector<Thing> mcHolding;
	std::vector<Thing> mcHad;
	std::vector<Thing> mcCantHave;
};