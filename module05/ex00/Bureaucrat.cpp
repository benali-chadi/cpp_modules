#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(): _name(""), _grade(75)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) throw()
{
	this->_name = name;
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException;
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException;
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
	this->_name = rhs._name;
	this->_grade = rhs._grade;

	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << this->_name << " bureucrat grade " << this->_grade;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					Bureaucrat::incrementGrade() const throw()
{
	this->_grade--;

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException;
}

void					Bureaucrat::decrementGrade() const throw()
{
	this->_grade++;

	if (grade > 150)
		throw Bureaucrat::GradeTooLowException;
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

const char			*Bureaucrat::GradeTooHighException what() const throw()
{
	return "The grade is too high";
}

const char			*Bureaucrat::GradeTooLowException what() const throw()
{
	return "The grade is too low";
}