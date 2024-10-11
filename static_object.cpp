#include "static_object.h"
#include <iostream>

static_object::static_object(float x, float y)
{
	this->set_position(x, y);
	std::cout << "static_object created x = " << x << " y = " << y << "\n";
}
