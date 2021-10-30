#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();

		MateriaSource &		operator=( MateriaSource const & rhs );

		virtual void		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const & type);

	private:
		AMateria *_materias[4];

};

#endif /* *************************************************** MATERIASOURCE_H */