#pragma once
#include "alive.h"
#include "amovable.h"
#include "entity.h"

class mob : public entity, public alive, public a_movable
{
public:
	mob(float x, float y, float max_hp, float current_hp);
	mob(float x, float y, float max_hp, float current_hp, vector2 move);
	void hurt(float dmg) override;
	void move(vector2 movement) override;
	void moveto(vector2 movement) override;
};

