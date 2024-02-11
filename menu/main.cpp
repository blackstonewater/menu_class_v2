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
		menu.print_elements_menu();
		int choice_usr{};
		//do{
			if(!(settings.control_of_entered_value(menu, menu.get_number_of_array_menu(), choice_usr))){
				settings.clear_iostream();
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
		//}while(!menu.get_control_back());
	}
}