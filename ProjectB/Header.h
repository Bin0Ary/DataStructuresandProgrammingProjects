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
//Fills a 2d vector with the values inside the string
//by creating a temporary vector and using pushback to
//fill the temp vector and then pushes the temporary
//vector into the input vector creating a row
void FillVector(std::vector <std::vector<int>> &v, const std::string &s) {
	size_t pos{0};
	for (size_t i{ 0 }; i < 2; i++) {
		std::vector <int> temp;
		for (size_t j{pos}; j < s.size(); j++) {
			if (s[j] == ' ') {
				pos = (j + 1);
				break;
			}
			else{temp.push_back(s[j] - 48); }
		}
		v.push_back(temp);
	}
	
}

// TODO: Add the multiplication step