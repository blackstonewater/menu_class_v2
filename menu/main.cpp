#include <iostream>
#include "Play.h"
#include "Menu.h"
#include "Settings.h"
#include <windows.h>


int main(){
	// main()
	Menu menu{};
	Settings settings{};
	Play play{};


	for(;;){
		// void() print elements menu
		menu.print_elements_menu();		
		// void() conttrol of the entered value
		//bool control_back{false};
		int choice_usr{};
		do{
			if(!(settings.control_of_entered_value(menu, menu.get_number_of_array_menu(), choice_usr))){

				// czyści buffor
				settings.clear_iostream();
				//menu.set_control_back(true);
			}	
			else{
				if(choice_usr == 1){
					std::cout << "plaing \n";
				}
				else if(choice_usr == 2){
					std::cout << "setting \n";
				}
				else
					exit(0);
			}
		}while(!menu.get_control_back());
	}
}