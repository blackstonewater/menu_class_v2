#pragma once
#include <iostream>
#include <string.h>

class Play
{
public:
	Play();
	void print_elements_play() const;
		bool control_back_t() const;
		bool control_back_t(bool contol_back_decision);
	bool control_of_entered_value(int number_of_array_elements);
	int get_number_of_array_play() const;
	~Play();

private:
	int const elements_of_play{3};
		int const *eop = &elements_of_play;
			std::string *menu_play_elements = new std::string[*eop];

			bool control_back{false};
};

