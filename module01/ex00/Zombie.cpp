#include "Zombie.hpp"

Zombie::Zombie(){	return ;	}

Zombie::~Zombie()
{
	std::cout << this->_name << " is dead" << std::endl;
	return ;
}

void		Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void		Zombie::set_name(std::string name)
{
	this->_name = name;
}

std::string	Zombie::get_name(void)
{
	return this->_name;
}
