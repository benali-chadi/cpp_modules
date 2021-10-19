#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->set_name("");
	ClapTrap::set_name(this->get_name() + "_clap_name");
	this->set_hitpoints(FragTrap::get_Hitpoints());
	this->set_energy_points(ScavTrap::get_Energy_points());
	this->set_attack_damage(FragTrap::get_Attack_damage());
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap(std::string const name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->set_name(name);
	ClapTrap::set_name(this->get_name() + "_clap_name");
	this->set_hitpoints(FragTrap::get_Hitpoints());
	this->set_energy_points(ScavTrap::get_Energy_points());
	this->set_attack_damage(FragTrap::get_Attack_damage());
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	this->set_name(rhs.get_name());
	this->set_hitpoints(rhs.get_Hitpoints());
	this->set_energy_points(rhs.get_Energy_points());
	this->set_attack_damage(rhs.get_Attack_damage());
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << this->get_name() << " ClapTrap name: " << ClapTrap::get_name() << std::endl;
}


void					DiamondTrap::set_name(std::string const name)
{
	this->_Name = name;
}

std::string				DiamondTrap::get_name(void) const
{
	return this->_Name;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */