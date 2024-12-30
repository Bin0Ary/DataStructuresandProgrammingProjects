#pragma once
#include <iostream>
#include <vector>
#include <string>

// Prompts the user for number inputs
void NumberPrompt(std::string &a) {
	std::cout << "Enter both numbers with one space between them: ";
	std::getline(std::cin, a);
}
/*Deletes all null characters at the begining of a string
by shifting all characters by one to the left everytime
a null character is read, it will stop after reading
the first non null character*/
void CleanString(std::string &s) {
	for (size_t i{ 0 }; i < s.size(); i) {
		if (s[i] == ' ') {
			for (size_t j{ i + 1 }; j <= s.size(); j++) {
				s[j - 1] = s[j];
			}
		}
		else if (s[i] != ' ') {
			return;
		}
	}
}
// WIP
void FillVector(std::vector <std::vector<int>> &v, const std::string &s) {
	int i{ 0 };
		for (size_t j{ 0 }; j < s.size(); j++) {
			if (s[j] == '\0') {
				i == 1;
			}
		}
	
}

// TODO: Add the multiplication step