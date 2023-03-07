#include "Calculations.h"
#include "Helpers.h"

#include <iostream>

int main() {
	while (true)
	{
		int response{ getUserOption() };

		if (response == 0) {
			std::cout << "\nGoodbye...\n";
			break;
		}
		else if (response == 1) {
			add();
		}
		else if (response == 2) {
			subtract();
		}
		else if (response == 3) {
			multiply();
		}
		else if (response == 4) {
			divide();
		}
		else {
			std::cout << "Please choose between 1 - 4\n";
			break;
		}
	}

	return 0;
}
