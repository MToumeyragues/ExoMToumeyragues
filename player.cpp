#include "player.h"
#include <iostream>

player::player(float x, float y, float max_hp, float current_hp) : a_movable(vector2(0.f, 0.f), 0.f)
{
	this->set_position(x, y);
	this->set_max_health(max_hp);
	this->set_current_health(current_hp);
	std::cout << "player created at x = " << x << " y = " << y << " with " << max_health << " max health and " << current_hp << " current health with direction vector x = " << position.get_x() << " y = " << position.get_y() << "\n";
}

player::player(float x, float y, float max_hp, float current_hp, vector2 move) : a_movable(move, 0.f)
{
	this->set_position(x, y);
	this->set_max_health(max_hp);
	this->set_current_health(current_hp);
	std::cout << "player created at x = " << x << " y = " << y << " with " << max_health << " max health and " << current_hp << " current health with direction vector x = " << position.get_x() << " y = " << position.get_y() << "\n";
}
void player::hurt(float dmg)
{
	if (get_current_health() > 0)
	{
		alive::hurt(dmg);
	}
	if (get_current_health() <= 0)
	{
		std::cout << "player died\n";
	}
}

void player::move(vector2 movement)
{
	vector2 normvect = (movement - position).normalized();
	set_position(position + (normvect * get_speed()));
	std::cout << "player move to x= " << position.get_x() << " y = " << position.get_y() << "\n";
}

void player::moveto(vector2 movement)
{
	set_position(movement);
	std::cout << "player move to x= " << position.get_x() << " y = " << position.get_y() << "\n";
}

void player::deal_damage(alive* thing, float dmg)
{
	std::cout << "player dealt " << dmg << " to " << "thing\n";
	thing->hurt(dmg);
}
