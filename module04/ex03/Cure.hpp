#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();

		Cure &		operator=( Cure const & rhs );

		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);

	private:

};

#endif /* ************************************************************ CURE_H */