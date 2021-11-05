#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	this->_target = rhs._target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool									PresidentialPardonForm::execute(Bureaucrat const &executor) const
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
	
	std::cout << this->_target << " as been pardoned by Zafod Beeblebrox" << std::endl;

	return true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */