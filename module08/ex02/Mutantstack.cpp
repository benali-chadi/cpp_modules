#include "Mutantstack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template<typename T>
Mutantstack<T>::Mutantstack()
{
}

template<typename T>
Mutantstack<T>::Mutantstack( const Mutantstack & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template<typename T>
Mutantstack<T>::~Mutantstack()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template<typename T>
void				Mutantstack<T>::operator=( Mutantstack const & rhs )
{
	this->c = rhs.c;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

template<typename T>
typename std::stack<T>::container_type::iterator	Mutantstack<T>::begin()
{
	return this->c.begin();
}

template<typename T>
typename std::stack<T>::container_type::iterator	Mutantstack<T>::end()
{
	return this->c.end();
}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator	Mutantstack<T>::rbegin()
{
	return this->c.rbegin();
}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator	Mutantstack<T>::rend()
{
	return this->c.rend();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */