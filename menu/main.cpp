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
			
			settings.control_of_entered_value(menu.get_number_of_array_menu());

			settings.clear_iostream();
		}	
		else
		{
			do
			{
				switch(menu.choice){
					case 1:{
						do{
							play.print_elements_play();	
							// tutaj kolejny f() pobierajaca dane z klawiatury do wyboru
							if(!(settings.control_of_entered_value(play.get_number_of_array_play()))){
								settings.control_of_entered_value(play.get_number_of_array_play());
							}
							/*
							else{
								switch(choice){
									case 1: {
										std::cout << "random numbers \n"; 
										break;
									};
									case 2: play.control_back_t(true); break;
									case 3: exit(0); break;
								}
							}
							*/
							settings.clear_iostream();
								std::cout << play.control_back_t() << " <--- \n";
							//}while(!game.control_back_t());
							}while(!(play.control_back_t()));
						}
						break;
					case 2:{
						// ta funkcja musi zostac umiesczona dla Settings
						// tutaj jest settings
						//game.control_back_t(true);
						}
				}
			}while(!play.control_back_t());
		}
		//f() czysci bufor przy  
		//settings.clear_iostream();
	}

}