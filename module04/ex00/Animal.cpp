#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	std::cout << "Animal Assignation operator called" << std::endl;
	this->type = rhs.type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void					Animal::makeSound() const
{
	std::cout << "*Animal generic sound*" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void					Animal::setType(std::string const type)
{
	this->type = type;
}

std::string				Animal::getType(void) const
{
	return this->type;
}

/* ************************************************************************** */