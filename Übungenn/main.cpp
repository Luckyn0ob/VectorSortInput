#include <iostream>
#include <algorithm>
#include <vector>
#include <execution>
#include <string>


int main() {

	std::string input;
	bool validInput = true;
	unsigned int inputMoreValue;
	std::vector<unsigned int> inputContainer{ 5, 2, 33, 5435, 123, 53653, 123, 453, 34, 1, 654, 4, 55 };
	std::cout << "Willkommen." << std::endl;
	for (;;) {
		std::cout << "Wollen Sie weitere Daten einfügen ? (j/n)" << std::endl;
		std::getline(std::cin, input);

		if (input == "j" || input == "J") {
			system("cls");
			std::cout << "Bitte geben Sie nun den Wert ein: ";
			std::cin >> inputMoreValue;
			std::cout << std::endl;
			inputContainer.push_back(inputMoreValue);
			if (inputMoreValue >= 1000000000) {
				inputContainer.pop_back();
				std::cout << "Es tut mir leid aber Ihre Zahl ist zu Hoch, bitte unter 1 000 000 000 bleiben." << std::endl;
			}
			
			std::cin.clear();
			std::cin.ignore();
		}

		else if (input == "n" || input == "N") {
			validInput = false;
		}

		else {
			
			std::cout << "Fehler: " << input << " ist keine gültige Eingabe" << std::endl;
		}

		if (validInput == false) {
			std::cout << "Die Daten werden ausgegeben." << std::endl;
			break;
		}
	}
	
	
	
	std::sort(inputContainer.begin(), inputContainer.end());

	for (int i : inputContainer) {
		std::cout << i << " ";
	}

	return 0;
}