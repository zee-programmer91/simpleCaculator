#include "Helpers.h"

#include <iostream>

float getNumber() {
	float userNumber{};

	std::cout << "Enter number: ";
	std::cin >> userNumber;

	return userNumber;
}

int getUserOption() {
	int response{};

	std::cout << "What do you want to do:\n0 - Quit\n1 - Add\n2 - Subtract\n3 - Multiply\n4 - Divide\n>>> ";
	std::cin >> response;

	return response;
}