#include "alive.h"
alive::alive() : max_health(0.f), current_health(0.f)
{
}

float alive::get_max_health()
{
	return max_health;
}

float alive::get_current_health()
{
	return  current_health;
}

void alive::set_max_health(float HP)
{
	max_health = HP;
}

void alive::set_current_health(float HP)
{
	current_health = HP;
}

bool alive::isAlive()
{
	return (current_health > 0);
}

void alive::hurt(float dmg)
{
	set_current_health(get_current_health() - dmg);
}
