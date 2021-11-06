# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main()
{
	try {
		Bureaucrat b("b", 3);

		b.incrementGrade();
		std::cout << b << std::endl;
		
		b.incrementGrade();
		std::cout << b << std::endl;

		b.incrementGrade();
		std::cout << b << std::endl;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat b1("b1", 0);
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat b2("b2", 151);
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		ShrubberyCreationForm		shrubbForm("Forest");
		RobotomyRequestForm			robotForm("Roboto");
		PresidentialPardonForm		presidForm("Office");
		Bureaucrat	b("B", 4);
		Bureaucrat	c("C", 75);
		Bureaucrat	d("D", 20);
		
		// std::cout << "\n" << form << "\n" << b << "\n" << c << std::endl;
		shrubbForm.beSigned(b);
		robotForm.beSigned(c);
		robotForm.beSigned(d);

		b.executeForm(shrubbForm);
		b.executeForm(robotForm);
		b.executeForm(presidForm);

		presidForm.beSigned(b);

		c.executeForm(shrubbForm);
		c.executeForm(robotForm);
		c.executeForm(presidForm);

		d.executeForm(shrubbForm);
		d.executeForm(robotForm);
		d.executeForm(presidForm);

	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		ShrubberyCreationForm		shrubbForm("Forest");
		RobotomyRequestForm			robotForm("Roboto");
		PresidentialPardonForm		presidForm("Office");
		Bureaucrat	b("B", 4);
		Bureaucrat	c("C", 3);
		Bureaucrat	d("D", 5);
		
		// std::cout << "\n" << form << "\n" << b << "\n" << c << std::endl;
		shrubbForm.beSigned(b);
		robotForm.beSigned(c);
		presidForm.beSigned(d);

		b.executeForm(shrubbForm);
		b.executeForm(robotForm);
		b.executeForm(presidForm);

		presidForm.beSigned(b);

		c.executeForm(shrubbForm);
		c.executeForm(robotForm);
		c.executeForm(presidForm);

		d.executeForm(shrubbForm);
		d.executeForm(robotForm);
		d.executeForm(presidForm);

	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Intern intern;
		Form *s, *r, *p, *o;

		if (
			!(s = intern.makeForm("shrubbery creation", "Home")) ||
			!(r = intern.makeForm("robotomy request", "rabotu")) ||
			!(p = intern.makeForm("presidential pardonForm", "Big house"))
		)
			return 1;

		std::cout << *s << "\n" << *r << "\n" << *p << std::endl;

		if (!(o = intern.makeForm("not a form", "nothing")))
			return 1;

		std::cout << *o << std::endl;

	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
