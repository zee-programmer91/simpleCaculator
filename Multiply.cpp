#include "Calculations.h"
#include "Helpers.h"

#include <iostream>

void multiply() {
	float firstNumber{ getNumber() };
	float secondNumber{ getNumber() };

	std::cout << firstNumber << " x " << secondNumber << " = " << firstNumber * secondNumber << "\n";
}