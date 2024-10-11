#pragma once
#include <vector>
#include "entity.h"

class world
{
protected:
	std::vector<entity*> list_entities;
public:
	world();
	void init_default();
	void step();
	bool end();
};

