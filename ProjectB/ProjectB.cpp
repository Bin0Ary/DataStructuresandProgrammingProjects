#include <iostream>
#include <string>
#include <vector>
#include "Header.h"
int main() {
	std::string numString{};
	NumberPrompt(numString);
	std::vector <std::vector <int>> numInt;
	CleanString(numString);
	FillVector(numInt, numString);
}

