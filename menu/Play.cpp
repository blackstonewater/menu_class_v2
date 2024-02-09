#include "Play.h"

Play::Play(){
	
	*(menu_play_elements+0) = {"random numbers \n"};
	*(menu_play_elements+1) = {"back \n"};
	*(menu_play_elements+2) = {"exit \n"};
}

Play::~Play(){
	//delete [] menu_play_elements;
	//delete eop;
}
void Play::print_elements_play() const{
	for(int i{0}; i < *eop; i++){
		//std::cout << (i+1) << ". " << menu_play_elements[i] << "\n";
		std::cout << (i+1) << ". " << *(menu_play_elements+i) << "\n";
	}
}

bool Play::control_back_tx(){
	return &control_back;
}
bool Play::control_back_t(bool control_back_into){
	control_back = control_back_into;
	return &control_back;
}