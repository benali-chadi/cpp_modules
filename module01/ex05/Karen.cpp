#include "Karen.hpp"

Karen::Karen() {	
	_funcs[0] = &Karen::debug;
	_funcs[1] = &Karen::info;
	_funcs[2] = &Karen::warning;
	_funcs[3] = &Karen::error;
	return;
}

Karen::~Karen() {	return;	}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
		<< std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
		<< std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int	get_index(std::string levels[4], std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (!levels[i].compare(level))
			return i;
	}
	return (-1);
}

void	Karen::complain(std::string level)
{
	// void		(Karen::*funcs[4])(void);
	std::string	*levels = new std::string[4];
	int			index;

	// funcs[0] = &Karen::debug;
	// funcs[1] = &Karen::info;
	// funcs[2] = &Karen::warning;
	// funcs[3] = &Karen::error;

	level[0].append("DEBUG");
	level[1].append("INFO");
	level[2].append("WARNING");
	level[3].append("ERROR");
	index = get_index(levels, level);
	if (index >= 0)
	*_funcs[index]();
}
