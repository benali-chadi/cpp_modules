#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b("b", 3);
	} catch (std::exception &e)
	{
		// std::cout << e << std::endl;
	}

	try {
		Bureaucrat b1("b1", 0);
	} catch (std::exception &e)
	{
		// std::cout << e << std::endl;
	}

	try {
		Bureaucrat b2("b2", 151);
	} catch (std::exception &e)
	{
		// std::cout << e << std::endl;
	}

	try {
		b.incrementGrade();
	} catch (std::exception &e)
	{
		// std::cout << e << std::endl;
	}
	// std::cout << b << std::endl;

	try {
		b.incrementGrade();
	} catch (std::exception &e)
	{
		// std::cout << e << std::endl;
	}
	// std::cout << b << std::endl;
	
	try {
		b.incrementGrade();
	} catch (std::exception &e)
	{
		// std::cout << e << std::endl;
	}
	// std::cout << b << std::endl;

	return 0;
}