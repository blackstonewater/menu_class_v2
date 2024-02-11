#include "Settings.h"
#include <iostream>
#include "Menu.h"

Settings::Settings(){

}

bool Settings::control_of_entered_value(Menu obiekt, int number_of_array_elements  , int& choice_usr ){
	std::cout << "put in place choice: ";
	std::cin >> choice_usr;
	if(choice_usr < 1 || choice_usr > number_of_array_elements){
		std::cout << "give me correct value 1.." << number_of_array_elements<< "\n";
		return false;
	}
	else{
		//obiekt.set_choice(obiekt, choice_usr);
		return true;
	}
}

void Settings::clear_iostream() const{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}