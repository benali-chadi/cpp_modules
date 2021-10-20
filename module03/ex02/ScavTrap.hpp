#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp" 
# include <iostream>
# include <string>

class ScavTrap: public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & rhs );

		void	guardGate(void);
		void	attack(std::string const & target);

	private:

};

#endif /* ******************************************************** SCAVTRAP_H */