#include "breakable_object.h"
#include <iostream>
breakable_object::breakable_object(float x, float y, float HP)
{
	this->set_position(x, y);
	this->set_max_health(HP);
	this->set_current_health(HP);
	std::cout << "breakable_object created x = " << x << " y = " << y << " with " << HP << " HP\n";
}

void breakable_object::hurt(float dmg)
{
	if (isAlive())
	{
		alive::hurt(dmg);
	}
	if (!isAlive())
	{
		std::cout << "Breakable Object just broke\n";
	}

}
