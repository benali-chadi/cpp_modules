#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class ICharacter
{

	public:

		ICharacter();
		ICharacter(ICharacter const & src);

		virtual ~ICharacter();

		ICharacter &	operator=(ICharacter const & rhs);
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
	
	private:

};

#endif /* ****************************************************** ICHARACTER_H */