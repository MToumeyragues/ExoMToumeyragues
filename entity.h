#pragma once
#include "vector2.h"
class entity
{
protected:
	vector2 position;
public:
	entity();
	virtual vector2 get_position();
	virtual void set_position(float x, float y);
	virtual void set_position(vector2 vect);
};
