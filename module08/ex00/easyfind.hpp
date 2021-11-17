#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>

template <typename T>
void		easyfind(T container, int elm)
{
	if (std::find(container.begin(), container.end(), elm) == container.end())
		throw std::invalid_argument("this container does not contain this element");
	
	std::cout << elm << " is in this array" << std::endl;
}

#endif