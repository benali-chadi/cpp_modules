#include "ScavTrap.hpp"

int main()
{
	ClapTrap a("a");
	ScavTrap s("s");

	a.attack("target");
	a.takeDamage(10);
	a.beRepaired(14);

	s.attack("target");
	s.takeDamage(5);
	s.beRepaired(10);
	s.guardGate();

	return (0);
}