// Make Your Own Adventure
// By Julian Bunch

#include <iostream>
#include "Thing.h"
#include "MYOA.h"

using namespace std;

int main(int argc, char* argv[])
{
	std::istream& cIn = std::cin;
	std::ostream& cOut = std::cout;

	Thing cThing1("Cat", "Waffle");
	Thing cThing2("Dog", "Bailey");

	cThing1.printOrName(cOut, cIn);
	cout << " ";
	cThing2.printOrName(cOut, cIn);
	cout << endl;

	cout << "After adding\n";
	cThing1.add(cThing2);
	cThing1.add(cThing1);
	cThing1.add(cThing1);
	cThing1.remove(cThing2);
	cThing1.printOrName(cOut, cIn);
	cout << endl << "Print all:\n";
	cThing1.printOrNameContents(cOut, cIn);
	cout << endl;

	return EXIT_SUCCESS;
}