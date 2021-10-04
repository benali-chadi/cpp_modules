#ifndef KAREN_H
# define KAREN_H
#include <iostream>

class Karen {
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	(Karen::*_funcs[4])(void);
	
	public:
		Karen();
		~Karen();
		void	complain(std::string level);
};

int	get_index(std::string levels[4], std::string level);

#endif