#include "Settings.h"
#include <iostream>
#include "Menu.h"

Settings::Settings(){

}

bool Settings::control_of_entered_value(int number_of_array_elements /* , int choice */){
	int choice_usr{};
	std::cout << "put in place choice: ";
	if(!(std::cin >> choice_usr) || choice_usr < 1 || choice_usr > number_of_array_elements){
		std::cout << "give me correct value 1.." << number_of_array_elements<< "\n";
		//clear_iostream();
		Menu menu;
		menu.choice = choice_usr;
		return false;
	}
	else
		return true;
}

void Settings::clear_iostream() const{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}