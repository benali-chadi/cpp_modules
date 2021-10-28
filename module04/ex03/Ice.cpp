#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice()
{
	std::cout << "Ice Default Constructor called" << std::endl;
	this->type = "ice";
}

Ice::Ice( const Ice & src )
{
	std::cout << "Ice Copy Contructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	std::cout << "Ice Assignation Operator called" << std::endl;
	this->type = "ice";
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria			*Ice::clone() const
{
	AMateria *m = new Ice(*this);
	return m;
}

void				Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */