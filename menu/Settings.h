#pragma once
#include "Menu.h"

class Settings
{
public:
	Settings();
	bool control_of_entered_value(Menu obiekt, int number_of_array_table	, int& choice );
	void clear_iostream() const;
private:
};

