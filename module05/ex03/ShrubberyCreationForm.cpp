#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	this->_target = rhs._target;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

bool								ShrubberyCreationForm::execute(Bureaucrat const &executor) const
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
	
	std::string file_name = this-> _target + "_shrubbery";
	std::ofstream file;
	file.open(file_name);

	file << TREE;

	file.close();

	return true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */