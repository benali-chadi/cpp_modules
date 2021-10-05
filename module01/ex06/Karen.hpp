#ifndef KAREN_H
# define KAREN_H
#include <iostream>

class Karen {
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

		int		get_index(std::string levels[4], std::string level);
	
	public:
		Karen();
		~Karen();
		void	complain(std::string level);
};

#endif
