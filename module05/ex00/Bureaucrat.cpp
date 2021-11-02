#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(): _name(""), _grade(75)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
	
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	this->_grade = rhs._grade;

	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << " bureucrat grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					Bureaucrat::incrementGrade()
{
	this->_grade -= 1;

	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void					Bureaucrat::decrementGrade()
{
	this->_grade += 1;

	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string				Bureaucrat::getName() const
{
	return this->_name;
}

int						Bureaucrat::getGrade() const
{
	return this->_grade;
}

/* ************************************************************************** */

const char			*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char			*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}