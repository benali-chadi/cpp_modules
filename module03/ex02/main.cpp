#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap a("A");
	ScavTrap s("S");
	FragTrap f("F");

	std::cout << std::endl;

	a.attack("Clap target");
	a.takeDamage(10);
	a.beRepaired(14);
	std::cout << std::endl;

	s.attack("Scav target");
	s.takeDamage(5);
	s.beRepaired(10);
	s.guardGate();
	std::cout << std::endl;

	f.attack("Frag target");
	f.takeDamage(15);
	f.beRepaired(13);
	f.highFivesGuys();

	std::cout << std::endl;
	return (0);
}