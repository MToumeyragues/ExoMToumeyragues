#pragma once
#include "alive.h"
class attacker
{
public:
	virtual void deal_damage(alive* thing, float dmg);
};

