#include "Zombie.hpp"

int main()
{
	Zombie *zombie;

	zombie = newZombie("Zombiiiie");
	zombie->announce();
	randomChump("Zombiiie2");
	delete zombie;
	return 0;
}
