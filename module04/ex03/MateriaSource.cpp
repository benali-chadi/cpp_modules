#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource(): _index(0)
{
	std::cout << "MateriaSource Default Constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	std::cout << "MateriaSource Copy Constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;

	for (int i = 0; i < this->_index; i++)
		if (this->_materias[i])
			delete this->_materias[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	std::cout << "MateriaSource Assignation Operator called" << std::endl;

	for (int i = 0; i < 4; i++)
		if (this->_materias[i])
			delete this->_materias[i];

	std::copy(rhs._materias, rhs._materias + 4, this->_materias);
	this->_index = rhs._index;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void						MateriaSource::learnMateria(AMateria *m)
{
	if (this->_index < 4)
	{
		this->_materias[this->_index] = m->clone();
		_index++;
	}
	else
		delete m;
}

AMateria					*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_index; i++)
	{
		if (this->_materias[i]->getType() == type)
			return this->_materias[i]->clone();
	}
	return 0;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */