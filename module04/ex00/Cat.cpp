#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat( const Cat & src )
{
	this->type = "Cat";
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat Assignation operator called" << std::endl;
	this->type = rhs.type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void				Cat::makeSound() const
{
	std::cout << "*Meow Meow*" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */