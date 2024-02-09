#include <iostream>
#include "Play.h"

int main(){
	// sets variable for elements 
	int constexpr elements_of_menu{3};
		int const *eom = &elements_of_menu;

	// constructor menu
	std::string *menu_main_elements = new std::string[*eom];
	*(menu_main_elements+0) = {"play \n"};
	*(menu_main_elements+1) = {"settings \n"};
	*(menu_main_elements+2) = {"exit \n"};

	// main()
	int choice{};
	for(;;){
		// void() print elements menu
		for(int i{0}; i < *eom; i++){
			std::cout << (i+1) << ". " << *(menu_main_elements+i) << "\n";
		}

		// void() conttrol of the entered value
		std::cout << "put in place choice: ";
		if(!(std::cin >> choice) || choice < 1 || choice > *eom){
			std::cout << "give me correct value 1.." << *eom << "\n";
		}
		else
		{
			// play()
			Play game{};
								std::cout << game.control_back_tx() << " <--- 1. time \n";
			do
			{
				switch(choice){
					case 1:{
						game.print_elements_play();
						// tutaj kolejny f() pobierajaca dane z klawiatury do wyboru
						{
							do{
							int choice{};
							std::cout << "put in place choice: ";
								if(!(std::cin >> choice) || choice < 1 || choice > *eom){
									std::cout << "give me correct value 1.." << *eom;
								}
								else{
									switch(choice){
										case 1: {
											std::cout << "random numbers \n"; 
											game.control_back_t(false);
											break;
										};
										case 2: game.control_back_t(true); break;
										case 3: exit(0); break;
									}
								}

								std::cout << game.control_back_tx() << " <--- \n";
							//}while(!game.control_back_t());
							}while(!(game.control_back_tx()));
						}
						break;
					}
					case 2:{
						// ta funkcja musi zostac umiesczona dla Settings
						// tutaj jest settings
						game.control_back_t(true);
					}
				}
			}while(!game.control_back_tx());


		}
		//f() czysci bufor przy  
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		
	}
}