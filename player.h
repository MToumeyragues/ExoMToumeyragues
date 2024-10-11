#pragma once
#include "alive.h"
#include "amovable.h"
#include "attacker.h"
#include "entity.h"

class player : public entity, public alive, public a_movable, attacker
{
public:
	player(float x, float y, float max_hp, float current_hp);
	player(float x, float y, float max_hp, float current_hp, vector2 move);
	void hurt(float dmg) override;
	void move(vector2 movement) override;
	void moveto(vector2 movement) override;
	void deal_damage(alive* thing, float dmg) override;
};

