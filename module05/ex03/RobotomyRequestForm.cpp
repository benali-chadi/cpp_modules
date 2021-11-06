#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	this->_target = rhs._target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool								RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
	{
		throw Form::NotSignedForm();
		return false;
	}
	if (executor.getGrade() > this->getGradeExecute())
	{
		throw Form::GradeTooLowException();
		return false;
	}
	
	std::cout << "* Annoying Drilling Sounds *" << std::endl;

	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " has not been robotomized" << std::endl;

	return true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */