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
		if(!(settings.control_of_entered_value(menu.get_number_of_array_menu()))){

			// czyści buffor
			settings.clear_iostream();
			
			// ponownie pobiera dane
			settings.control_of_entered_value(menu.get_number_of_array_menu());

		}	
		else{
			
			std::cout << menu.get_choice() << "<---- \n";
		}
	}
}