#ifndef HUMANEA_HPP
# define HUMANEA_HPP
#include "Weapon.hpp"

class	HumanA{
	private:
		Weapon		_weapon;
		std::string	_name;
	
	public:
		HumanA(std::string name, Weapon Weapon);
		~HumanA();
		void	attack();
};

#endif