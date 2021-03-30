#pragma once

#include <iostream>
#include "Player.h"

class Scene {
public:
	Scene();

	void play(Player* pcPlayer);

private:
	std::vector<Thing> mcThings;
	std::string mcRealName;
	std::string mcDisplayName;
};