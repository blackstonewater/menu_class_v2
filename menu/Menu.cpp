#include "Menu.h"

Menu::Menu(){
		
	
	*(menu_main_elements+0) = {"play \n"};
	*(menu_main_elements+1) = {"settings \n"};
	*(menu_main_elements+2) = {"exit \n"};
}

void Menu::print_elements_menu() const{
	for(int i{0}; i < elements_of_menu; i++){
		std::cout << (i+1) << ". " << *(menu_main_elements+i) << "\n";
	}
}

int Menu::get_number_of_array_menu() const{
	return elements_of_menu;
}