#pragma once

#include <vector>
#include <iostream>

class Thing {
public:
	Thing();
	Thing(std::string cRealName, std::string cDisplayName);

	void printOrName(std::ostream& rcOut, std::istream& rcIn);
	void printOrNameContents(std::ostream& rcOut, std::istream& rcIn);
	void add(Thing cThing);
	bool contains(Thing cThing);
	bool contains(int quantity, Thing cThing);
	int count();
	void remove(int quantity, Thing cThing);
	void removeOne(Thing cThing);
	void removeAll(Thing cThing);
	void empty();
	void expand(Thing cThing);

private:
	std::vector<Thing> mcThings;
	std::string mcRealName;
	std::string mcDisplayName;
	int mQuantity;

	void treePrint(std::ostream& rcOut, std::istream& rcIn, int tabs);
};