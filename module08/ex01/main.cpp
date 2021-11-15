#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	try {
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		sp.addNumber(9);

	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	Span sp2 = Span(50);

	try {
		sp2.addNumber(1, 1000);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;

		sp2.addNumber(4);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

}