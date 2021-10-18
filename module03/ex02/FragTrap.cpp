#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->set_name("");
	this->set_hitpoints(100);
	this->set_energy_points(100);
	this->set_attack_damage(30);
	return ;
}


FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::FragTrap(std::string const name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->set_name(name);
	this->set_hitpoints(100);
	this->set_energy_points(100);
	this->set_attack_damage(30);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->set_name(rhs.get_name());
	this->set_hitpoints(rhs.get_Hitpoints());
	this->set_energy_points(rhs.get_Energy_points());
	this->set_attack_damage(rhs.get_Attack_damage());
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void					FragTrap::highFivesGuys(void)
{
	std::cout << "Let's have a high five!!! " << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */