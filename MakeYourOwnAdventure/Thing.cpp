#include "Thing.h"

Thing::Thing() {
	mcRealName = "DEFAULT";
	mQuantity = 1;
}

Thing::Thing(std::string cRealName, std::string cDisplayName) {
	mcRealName = cRealName;
	mcDisplayName = cDisplayName;
	mQuantity = 1;
}

void Thing::printOrName(std::ostream& rcOut, std::istream& rcIn) {
	if (!mcDisplayName.size()) {
		rcIn >> mcDisplayName;
	} 
	else {
		rcOut << mQuantity << " x " << mcDisplayName;
	}
}

void Thing::printOrNameContents(std::ostream& rcOut, std::istream& rcIn) {
	treePrint(rcOut, rcIn, 0);
}

void Thing::treePrint(std::ostream& rcOut, std::istream& rcIn, int tabs) {
	if (!mcDisplayName.size()) {
		rcIn >> mcDisplayName;
	}
	else {
		rcOut << mQuantity << " x " << mcDisplayName << "\n";
	}

	for (unsigned int i = 0; mcThings.size() > i; i++) {
		for (int j = 0; tabs > j; j++) {
			rcOut << "  ";
		}
		rcOut << "  ";
		mcThings[i].treePrint(rcOut, rcIn, ++tabs);
	}
}

void Thing::add(Thing cThing) {
	bool bAdded = false;

	for (unsigned int i = 0; mcThings.size() > i; i++) {
		if (cThing.mcRealName == mcThings[i].mcRealName) {
			mcThings[i].mQuantity += cThing.mQuantity;
			i = mcThings.size();
			bAdded = true;
		}
	}

	if (!bAdded) {
		mcThings.push_back(cThing);
	}
}

bool Thing::contains(Thing cThing) {
	bool bContained = false;

	for (unsigned int i = 0; mcThings.size() > i; i++) {
		if (cThing.mcRealName == mcThings[i].mcRealName) {
			bContained = true;
			i = mcThings.size();
		}
	}

	return bContained;
}

bool Thing::contains(int quantity, Thing cThing) {
	bool bContained = false;

	for (unsigned int i = 0; mcThings.size() > i; i++) {
		if (cThing.mcRealName == mcThings[i].mcRealName) {
			bContained = (cThing.mQuantity == mcThings[i].mQuantity);
			i = mcThings.size();
		}
	}

	return bContained;
}

int Thing::count() {
	return mQuantity;
}

void Thing::remove(int quantity, Thing cThing) {
	for (unsigned int i = 0; mcThings.size() > i; i++) {
		if (cThing.mcRealName == mcThings[i].mcRealName) {
			if (quantity > mcThings[i].mQuantity) {
				mcThings.erase(mcThings.begin() + i);
			}
			else {
				mcThings[i].mQuantity -= quantity;
			}

			i = mcThings.size();
		}
	}
}

void Thing::removeOne(Thing cThing) {
	for (unsigned int i = 0; mcThings.size() > i; i++) {
		if (cThing.mcRealName == mcThings[i].mcRealName) {
			if (1 == mcThings[i].mQuantity) {
				mcThings.erase(mcThings.begin() + i);
			}
			else {
				mcThings[i].mQuantity--;
			}

			i = mcThings.size();
		}
	}
}

void Thing::removeAll(Thing cThing) {
	for (unsigned int i = 0; mcThings.size() > i; i++) {
		if (cThing.mcRealName == mcThings[i].mcRealName) {
			mcThings.erase(mcThings.begin() + i);
			i = mcThings.size();
		}
	}
}

void Thing::empty() {
	mcThings.clear();
	mQuantity = 0;
}

void Thing::expand(Thing cThing) {
	for (unsigned int i = 0; mcThings.size() > i; i++) {
		add(mcThings[i]);
	}
}