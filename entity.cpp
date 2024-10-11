#include "entity.h"

entity::entity() : position(0.f, 0.f)
{
}

vector2 entity::get_position()
{
	return { position.get_x(), position.get_y() };
}

void entity::set_position(float x, float y)
{
	position.set_x(x);
	position.set_y(y);
}

void entity::set_position(vector2 vect)
{
	position = vect;
}
