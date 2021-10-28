#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure()
{
	std::cout << "Cure Default Contructor called" << std::endl;
	this->type = "cure";
}

Cure::Cure( const Cure & src )
{
	std::cout << "Cure Copy Contructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	std::cout << "Cure Destroctor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	this->type = rhs.type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria			*Cure::clone() const
{
	AMateria *m = new Cure(*this);
	return m;
}

void				Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */