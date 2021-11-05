#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
{
}

Form::Form(std::string name, int gradeSign, int gradeExecute): _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute), _isSigned(false)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	this->_gradeSign = rhs._gradeSign;
	this->_gradeExecute = rhs._gradeExecute;
	this->_isSigned = rhs._isSigned;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << " Form is " << (i.getIsSigned() ? "signed" : "not signed");
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void					Form::beSigned(Bureaucrat b)
{
	this->_isSigned = b.signForm(*this);

	if (!this->_isSigned)
		throw Form::GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string		Form::getName() const 
{
	return this->_name;
}

int				Form::getGradeSign() const
{
	return this->_gradeSign;
}

int				Form::getGradeExecute() const
{
	return this->_gradeExecute;
}

bool				Form::getIsSigned() const
{
	return this->_isSigned;
}

/* ************************************************************************** */

const char			*Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char			*Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}