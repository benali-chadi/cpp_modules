#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(): _Name(""), _Hitpoints(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "Default contructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name): _Name(name), _Hitpoints(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "Contructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "Copy contructor called" << std::endl;
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_Name = rhs.get_name();
	this->_Hitpoints = rhs.get_Hitpoints();
	this->_Energy_points = rhs.get_Energy_points();
	this->_Attack_damage = rhs.get_Attack_damage();

	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void					ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->get_name() << " attack " << target << " causing " << this->get_Hitpoints() << " points of damage!" << std::endl;
}

void					ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->get_name() << " took damage of the amount of " << amount << std::endl;
	this->_Attack_damage += amount;
}

void					ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTap " << this->get_name() << " got repaired by the amount of " << amount << std::endl;
	this->_Attack_damage -= amount;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string 			ClapTrap::get_name(void) const {
	return this->_Name;
}

int						ClapTrap::get_Hitpoints(void) const {
	return this->_Hitpoints;
}

int						ClapTrap::get_Energy_points(void) const {
	return this->_Energy_points;
}

int						ClapTrap::get_Attack_damage(void) const {
	return this->_Attack_damage;
}

void					ClapTrap::set_name(std::string const name)
{
	this->_Name = name;
}

void					ClapTrap::set_hitpoints(int const hitpoints)
{
	this->_Hitpoints = hitpoints;
}

void					ClapTrap::set_energy_points(int const energy_points)
{
	this->_Energy_points = energy_points;
}

void					ClapTrap::set_attack_damage(int const attack_damage)
{
	this->_Attack_damage = attack_damage;
}


/* ************************************************************************** */