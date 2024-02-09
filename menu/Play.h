#pragma once
#include <iostream>

class Play
{
public:
	Play();
	void print_elements_play() const;
		bool control_back_tx();
		bool control_back_t(bool);
	~Play();

private:
	int const elements_of_play{3};
		int const *eop = &elements_of_play;
			std::string *menu_play_elements = new std::string[*eop];

	bool control_back{false};
};

