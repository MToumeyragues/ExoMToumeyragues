#include <iostream>
#include <string>
#include <thread>
#include <typeinfo>

#include "world.h"

int main(int argc, const char* argv[])
{
	world* w = new world();
	w->init_default();
	while (w->end() == false)
	{
		system("pause");
		w->step();
		std::cout << "\n";
	}
	
	return 0;
}
