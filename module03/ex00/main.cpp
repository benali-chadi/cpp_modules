#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("a");

	a.attack("target");
	a.takeDamage(10);
	a.beRepaired(14);

	return (0);
}