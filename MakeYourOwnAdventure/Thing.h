#pragma once

#include<vector>

class Thing {
public:
	Thing();

private:
	std::vector<Thing> mcThings;
	std::string mcRealName;
	std::string mcDisplayName;
	int mQuantity;
};