#include "Zombie.hpp"

int main()
{
	int		N = 10;
	Zombie	*zombies = zombieHorde(N, "chi 7aja");

	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	
	delete [] zombies;
	return 0;
}