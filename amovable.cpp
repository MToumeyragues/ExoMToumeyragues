#include "amovable.h"

a_movable::a_movable(vector2 direction, float speed) : direction(0.f, 0.f), speed(0.f)
{
}

void a_movable::set_direction(vector2 direction)
{
	this->direction = direction;
}

void a_movable::set_speed(float speed)
{
	this->speed = speed;
}

void a_movable::move(vector2 movement)
{
}

void a_movable::moveto(vector2 movement)
{
}

float a_movable::get_speed()
{
	return speed;
}
