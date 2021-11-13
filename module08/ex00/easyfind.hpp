#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>

template <typename T>
int		easyfind(T container, int elm)
{
	typename T::iterator it;
	for (it = container.begin() ;it != container.end(); it++)
		if (*it == elm)
			return *it;
	
	throw std::invalid_argument("this container does not contain this element");
}

#endif