#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){	return ;	}

Zombie::~Zombie()
{
	std::cout << this->_name << " is dead" << std::endl;
	return ;
}

void		Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::get_name(void)
{
	return this->_name;
}
