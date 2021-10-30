#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(): _name(""), _index(-1)
{
	std::cout << "Character Default Constructor called" << std::endl;
}

Character::Character(std::string const name): _name(name), _index(-1)
{
	std::cout << "Character Constructor called" << std::endl;
}

Character::Character( const Character & src )
{
	std::cout << "Character copy constructor called" << std::endl;
	std::copy(src.materias, src.materias + 4, this->materias);
	this->_name = src._name;
	this->_index = src._index;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;

	for (int i = 0; i < this->_index; i++)
		if (this->materias[i])
			delete this->materias[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	this->_name = rhs._name;
	
	for (int i = 0; i < 4; i++)
		if (this->materias[i])
			delete this->materias[i];
	
	this->_index = rhs._index;
	std::copy(rhs.materias, rhs.materias + 4, this->materias);
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					Character::equip(AMateria *m)
{
	if (this->_index == -1)
	{
		this->materias[0] = m->clone();
		this->_index = 1;
	}
	else if (this->_index < 4)
	{
		this->materias[_index] = m->clone();
		this->_index++;
	}
}

void					Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->_index && this->_index != -1)
	{
		for (int i = idx; i < 3; i++)
			this->materias[i] = this->materias[i + 1];
		this->_index--;
	}
}

void					Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->_index && this->_index != -1)
		this->materias[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const 		&Character::getName() const
{
	return this->_name;
}

/* ************************************************************************** */