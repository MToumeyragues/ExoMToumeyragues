#include "mob.h"
#include <iostream>
#include <string>

mob::mob(float x, float y, float max_hp, float current_hp) : a_movable(vector2(0.f, 0.f), 0.f)
{
	this->entity::set_position(x, y);
	this->set_max_health(max_hp);
	this->set_current_health(current_hp);
	std::cout << "mob created at x = " << x << " y = " << y << " with " << max_health << " max health and " << current_hp << " current health with direction vector x = " << position.get_x() << " y = " << position.get_y() << "\n";
}

mob::mob(float x, float y, float max_hp, float current_hp, vector2 move) : a_movable(move, 0.f)
{
	this->set_position(x, y);
	this->set_max_health(max_hp);
	this->set_current_health(current_hp);
	std::cout << "mob created at x = " << x << " y = " << y << " with " << max_health << " max health and " << current_hp << " current health with direction vector x = " << position.get_x() << " y = " << position.get_y() << "\n";
}

void mob::hurt(float dmg)
{
	if (get_current_health() > 0)
	{
		alive::hurt(dmg);
	}
	if (get_current_health() <= 0)
	{
		std::cout << "Mob died\n";
	}
}

void mob::move(vector2 movement)
{
	vector2 normvect = (movement - position).normalized();
	set_position(position + (normvect * get_speed()));
	std::cout << "mob move to x= " << position.get_x() << " y = " << position.get_y() << "\n";
}

void mob::moveto(vector2 movement)
{
	set_position(movement);
	std::cout << "mob move to x= " << position.get_x() << " y = " << position.get_y() << "\n";
}
