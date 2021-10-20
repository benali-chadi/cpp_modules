#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(std::string const name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & rhs );

		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		std::string get_name(void) const;
		int			get_Hitpoints(void) const;
		int			get_Energy_points(void) const;
		int			get_Attack_damage(void) const;

		void		set_name(std::string const name);
		void		set_hitpoints(int const hitpoints);
		void		set_energy_points(int const energy_points);
		void		set_attack_damage(int const attack_damage);

	private:

		std::string _Name;
		int			_Hitpoints;
		int			_Energy_points;
		int			_Attack_damage;

};

#endif /* ******************************************************* ClapTrap_H */