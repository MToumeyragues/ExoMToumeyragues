#include "world.h"
#include <iostream>
#include <string>
#include "breakable_object.h"
#include "mob.h"
#include "player.h"
#include "static_object.h"
world::world()
= default;

void world::init_default()
{
	static_object* so = new static_object(2.f, 2.f);
	breakable_object* bo = new breakable_object(5.f, 0.f, 1.f);
	mob* enemy = new mob(10.f, -5.f, 20.f, 20.f);
	enemy->set_speed(1.f);
	player* player1 = new player(0.f, 0.f, 10.f, 10.f);
	player1->set_speed(1.f);

	list_entities.push_back(so);
	list_entities.push_back(bo);
	list_entities.push_back(enemy);
	list_entities.push_back(player1);
}

void world::step()
{
	if (!list_entities.empty())
	{
		player* player1 = nullptr;
		mob* enemy = nullptr;
		breakable_object* bo = nullptr;
		for (entity* object : list_entities)
		{
			if(dynamic_cast<player*>(object)!= nullptr)
			{
				player1 = dynamic_cast<player*>(object);
			}
			else if (dynamic_cast<mob*>(object) != nullptr)
			{
				enemy = dynamic_cast<mob*>(object);
			}
			else if (dynamic_cast<breakable_object*>(object) != nullptr)
			{
				bo = dynamic_cast<breakable_object*>(object);
			}
		}
		if(enemy->isAlive())
		{
			enemy->move(bo->get_position());
			player1->move(enemy->get_position());
			if((player1->get_position() - enemy->get_position()).norm() <= 1)
			{
				player1->deal_damage(enemy, 10);
			}
		}
		else
		{
			player1->move(bo->get_position());
			if ((player1->get_position() - enemy->get_position()).norm() <= 1)
			{
				player1->deal_damage(bo, 10);
			}
		}
	}
	else
		std::cout << "empty world";
}

bool world::end()
{
	if (!list_entities.empty())
	{
		mob* enemy = nullptr;
		breakable_object* bo = nullptr;
		for (entity* object : list_entities)
		{
			if (dynamic_cast<mob*>(object) != nullptr)
			{
				enemy = dynamic_cast<mob*>(object);
			}
			else if (dynamic_cast<breakable_object*>(object) != nullptr)
			{
				bo = dynamic_cast<breakable_object*>(object);
			}
		}
		if (!enemy->isAlive() && !bo->isAlive())
		{
			std::cout << "ENNNND";
			return true;
		}
		return false;
	}
	std::cout << "empty world";
	return true;
}
