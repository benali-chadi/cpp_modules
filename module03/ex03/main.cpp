#include "DiamondTrap.hpp"

int main()
{
	ClapTrap a("A");
	ScavTrap s("S");
	FragTrap f("F");
	DiamondTrap d("D");

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

	d.whoAmI();
	d.attack("Diamond target");
	d.takeDamage(15);
	d.beRepaired(13);
	d.guardGate();
	d.highFivesGuys();

	std::cout << std::endl;
	return (0);
}