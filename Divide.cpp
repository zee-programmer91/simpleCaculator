#include "Calculations.h"
#include "Helpers.h"

#include <iostream>

void divide() {
	float firstNumber{ getNumber() };
	float secondNumber{ getNumber() };

	std::cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << "\n";
}
