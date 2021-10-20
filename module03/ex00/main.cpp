#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("A");

	a.attack("Clap target");
	a.takeDamage(10);
	a.beRepaired(14);

	std::cout << std::endl;
	return (0);
}