#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie();
		void		announce(void);
		std::string	get_name(void);

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif