#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		void				announce(void);
		void				set_name(std::string name);
		const std::string	get_name(void);

};

Zombie	*zombieHorde(int N, std::string name);

#endif