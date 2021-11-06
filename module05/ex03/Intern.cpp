#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int						compare(std::string formName)
{
	if (!formName.compare("shrubbery creation"))
		return 1;
	if (!formName.compare("robotomy request"))
		return 2;
	if (!formName.compare("presidential pardonForm"))
		return 3;
	return 0;
}

Form					*toReturn(std::string formName, Form *forms[3],int index)
{
	for (int i = 0; i < 3; i++)
		if (i != index)
			delete forms[i];
	std::cout << "Intern creates " << formName << std::endl;
	
	return forms[index];
}

Form					*Intern::makeForm(std::string formName, std::string target)
{
	Form	*forms[3] = {
		new ShrubberyCreationForm(target), 
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
		};
	
	switch (compare(formName))
	{
	case 1:
		return toReturn(formName, forms, 0);
	case 2:
		return toReturn(formName, forms, 1);
	case 3:
		return toReturn(formName, forms, 2);
	
	default:
		delete forms[0];
		delete forms[1];
		delete forms[2];
		std::cout << "There is no form with this name" << std::endl;
		break;
	}
	return 0;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */