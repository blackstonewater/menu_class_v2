#include "Play.h"
/////
//// public:
//
Play::Play(){
	*(menu_play_elements+0) = {"random numbers \n"};
	*(menu_play_elements+1) = {"back \n"};
	*(menu_play_elements+2) = {"exit \n"};
}

void Play::print_elements_play() const{
	for(int i{0}; i < *eop; i++){
		//std::cout << (i+1) << ". " << menu_play_elements[i] << "\n";
		std::cout << (i+1) << ". " << *(menu_play_elements+i) << "\n";
	}
}

bool Play::control_of_entered_value(int number_of_array_elements){
	int choice{};
	std::cout << "put in place choice: ";
	if(!(std::cin >> choice) || choice < 1 || choice > number_of_array_elements){
		std::cout << "give me correct value 1.." << number_of_array_elements<< "\n";
		return false;
	}
	else
		return true;
}
