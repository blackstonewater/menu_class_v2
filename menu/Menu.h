#pragma once
#include <iostream>
class Menu
{
public:
	Menu();
	void print_elements_menu() const;
	int get_number_of_array_menu() const; 
	int choice;

private:
	int elements_of_menu{3};
	std::string *menu_main_elements = new std::string[elements_of_menu];
};

