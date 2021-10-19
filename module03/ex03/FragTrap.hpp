#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{

	public:

		FragTrap();
		FragTrap( FragTrap const & src );
		FragTrap(std::string const name);
		~FragTrap();

		FragTrap &		operator=( FragTrap const & rhs );

		void			highFivesGuys(void);

	private:

};

#endif /* ******************************************************** FRAGTRAP_H */