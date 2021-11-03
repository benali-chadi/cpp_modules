#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Bureaucrat b("b", 3);

		try {
			b.incrementGrade();
			std::cout << b << std::endl;
		} catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		try {
			b.incrementGrade();
			std::cout << b << std::endl;
		} catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		
		try {
			b.incrementGrade();
			std::cout << b << std::endl;
		} catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
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
		Form		form("aForm", 50, 50);
		Bureaucrat	b("b", 4);
		Bureaucrat	c("c", 52);
		
		std::cout << "\n" << form << "\n" << b << "\n" << c << std::endl;
		form.beSigned(b);
		form.beSigned(c);
		std::cout << "something" << std::endl;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
