#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character: public ICharacter
{

	public:

		Character();
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

	private:
		AMateria *materias;

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */