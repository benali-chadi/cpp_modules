#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	std::cout << "Scavtrap default constructor called" << std::endl;
	this->set_name("");
	this->set_hitpoints(100);
	this->set_energy_points(50);
	this->set_attack_damage(20);
	return ;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "Scavtrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string const name)
{
	std::cout << "Scavtrap constructor called" << std::endl;
	this->set_name(name);
	this->set_hitpoints(100);
	this->set_energy_points(50);
	this->set_attack_damage(20);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "Scavtrap assignation operator called" << std::endl;
	this->set_name(rhs.get_name());
	this->set_hitpoints(rhs.get_Hitpoints());
	this->set_energy_points(rhs.get_Energy_points());
	this->set_attack_damage(rhs.get_Attack_damage());

	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void					ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->get_name() << " have enetred in Gate keeper mode" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */