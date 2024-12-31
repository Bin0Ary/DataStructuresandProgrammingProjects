#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include "Header.h"
int main() {
	std::string numString{};
	std::deque <std::deque <int>> numInt;
	std::deque <std::deque <int>> resultInt;
	NumberPrompt(numString);
	CleanString(numString);
	FillVector(numInt, numString);
	Multiplication(numInt, resultInt);
}

