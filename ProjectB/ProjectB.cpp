#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include "Header.h"
int main() {
	std::deque <std::deque<int>> l{ {123},{245444} };
	std::cout << l.size();
	/*std::string numString{};
	NumberPrompt(numString);
	std::deque <std::deque <int>> numInt;
	CleanString(numString);
	FillVector(numInt, numString);*/
}

