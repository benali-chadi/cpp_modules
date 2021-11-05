#include "PresidenrialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidenrialPardonForm::PresidenrialPardonForm()
{
}

PresidenrialPardonForm::PresidenrialPardonForm( const PresidenrialPardonForm & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidenrialPardonForm::~PresidenrialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidenrialPardonForm &				PresidenrialPardonForm::operator=( PresidenrialPardonForm const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidenrialPardonForm const & i )
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