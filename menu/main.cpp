#include <iostream>
#include "Play.h"
#include "Menu.h"
#include "Settings.h"
#include <windows.h>


int main(){
	// main()
	Menu menu;
	Settings settings;
	Play play{};


	for(;;){
		// void() print elements menu
		menu.print_elements_menu();		
		// void() conttrol of the entered value
		bool control_back{false};
		do{
			if(!(settings.control_of_entered_value(menu.get_number_of_array_menu()))){

				// czyści buffor
				settings.clear_iostream();
				control_back = true;
			}	
			else{
			
				std::cout << menu.get_choice() << "<---- \n";
			}
		}while(!control_back);
	}
}