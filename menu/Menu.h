#pragma once
#include <iostream>
#include "Menu.h"
class Menu
{
public:
	Menu();
	void print_elements_menu() const;

	void set_choice(Menu& obiekt, int choice_usr){
		obiekt.choice = choice_usr;
	}
		void set_control_back(bool control_back_usr){
		control_back = control_back_usr; }
	void set_choice(Menu& obiekt) const {
		obiekt.choice = get_choice(); }
	
	
	int get_number_of_array_menu() const{
		return elements_of_menu; }
	int get_choice() const{
		return choice; }
	bool get_control_back() const{
		return control_back; }


private:
	int choice{};
bool control_back{false};
	int elements_of_menu{3};
	std::string *menu_main_elements = new std::string[elements_of_menu];
};

