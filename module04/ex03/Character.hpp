#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{

	public:

		Character();
		Character(std::string const name);
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		AMateria	*_materias[4];
		std::string	_name;
		int			_index;
};

#endif /* ******************************************************* CHARACTER_H */