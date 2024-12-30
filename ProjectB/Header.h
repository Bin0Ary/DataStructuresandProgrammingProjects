#pragma once
#include <iostream>
#include <vector>
#include <string>

// Prompts the user for number inputs
void NumberPrompt(std::string &a, std::string &b) {
	std::cout << "Enter the first number: ";
	std::cin >> a;
	std::cout << "Enter the second number: ";
	std::cin >> b;
}