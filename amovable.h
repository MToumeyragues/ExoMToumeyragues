#pragma once
#include "vector2.h"
class a_movable
{
private:
	vector2 direction;
	float speed;
public:
	a_movable(vector2 direction, float speed);
	virtual void set_direction(vector2 direction);
	virtual void set_speed(float speed);
	virtual void move(vector2 movement);
	virtual void moveto(vector2 movement);
	float get_speed();
};
