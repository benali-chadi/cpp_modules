#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
	std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria( const AMateria & src )
{
	std::cout << "AMateria copy Constructor called" << std::endl;
	*this = src;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria Constructor called" << std::endl;
	this->type = type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	std::cout << "AMateria Assignation operator called" << std::endl;
	this->type = rhs.type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */