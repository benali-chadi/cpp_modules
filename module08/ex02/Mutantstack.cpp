#include "Mutantstack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Mutantstack::Mutantstack()
{
}

Mutantstack::Mutantstack( const Mutantstack & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Mutantstack::~Mutantstack()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Mutantstack &				Mutantstack::operator=( Mutantstack const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Mutantstack const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */