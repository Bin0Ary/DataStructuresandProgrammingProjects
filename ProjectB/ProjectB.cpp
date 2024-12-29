#include <iostream>
#include <string>
#include <vector>
int main() {
	std::string numString1{}, numString2{};
	std::cout << "Enter num 1: ";
	std::cin >> numString1;
	std::cout << "Enter num 2: ";
	std::cin >> numString2;
	std::vector <int> numInt1(numString1.size(), 0);
	std::vector <int> numInt2(numString2.size(), 0);
	std::vector <int> numInt3;
	for (int i{ 0 }; i < numString1.size(); i++) {
		numInt1[i] = (int)numString1[i] - 48;
	}
	for (int i{ 0 }; i < numString2.size(); i++) {
		numInt2[i] = (int)numString2[i] - 48;
	}
	for (auto val : numInt1) {
		std::cout << val << std::endl;
	}
}	

