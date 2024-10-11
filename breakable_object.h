#pragma once
#include "alive.h"
#include "entity.h"

class breakable_object : public entity , public alive
{
public:
	breakable_object(float x, float y, float HP);
	void hurt(float dmg) override;
};

