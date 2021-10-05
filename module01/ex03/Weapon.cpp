#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {	return ;	}

Weapon::~Weapon() {	return ;	}

const std::string		&Weapon::getType(void)
{
	return this->_type;
}

void			Weapon::setType(std::string type)
{
	this->_type = type;
}
