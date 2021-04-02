#pragma once

#include <iostream>
#include "Player.h"
#include "Choice.h"

class Scene {
public:
	Scene();

	void play(Player& rcPlayer);

private:
	std::vector<Thing> mcThings;
	std::vector<Choice> mcChoices;
	Choice mcDecision;
	std::string mcRealName;
	std::string mcDisplayName;
};