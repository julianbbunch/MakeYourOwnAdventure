// Make Your Own Adventure
// By Julian Bunch

#include <iostream>
#include "MYOA.h"

int main(int argc, char* argv[])
{
	std::string path = argv[0];
	MYOA game(path, std::cout);

	return EXIT_SUCCESS;
}