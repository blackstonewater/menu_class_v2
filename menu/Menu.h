#pragma once
class Menu
{
public:
int get_number_of_array_menu() const{
	return elements_of_menu;
}

void set_choice(int choice_usr){
	choice = choice_usr;
}

int get_choice() const{
	return choice;
}

private:
	int choice;

};

