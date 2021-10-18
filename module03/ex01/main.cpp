#include "ScavTrap.hpp"

int main()
{
	ClapTrap a("A");
	ScavTrap s("S");

	a.attack("Clap target");
	a.takeDamage(10);
	a.beRepaired(14);

	s.attack("Scav target");
	s.takeDamage(5);
	s.beRepaired(10);
	s.guardGate();

	return (0);
}