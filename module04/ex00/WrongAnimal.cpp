# include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	this->type = rhs.type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void					WrongAnimal::makeSound() const
{
	std::cout << "*WrongAnimal generic sound*" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void					WrongAnimal::setType(std::string const type)
{
	this->type = type;
}

std::string				WrongAnimal::getType(void) const
{
	return this->type;
}

/* ************************************************************************** */
