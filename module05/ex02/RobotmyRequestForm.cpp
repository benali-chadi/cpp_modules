#include "RobotmyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotmyRequestForm::RobotmyRequestForm()
{
}

RobotmyRequestForm::RobotmyRequestForm( const RobotmyRequestForm & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotmyRequestForm::~RobotmyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotmyRequestForm &				RobotmyRequestForm::operator=( RobotmyRequestForm const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotmyRequestForm const & i )
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