#include "Bureaucrat.hpp"

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

	return 0;
}