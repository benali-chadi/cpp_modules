#include "mutantstack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack( const MutantStack & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template<typename T>
MutantStack<T>::~MutantStack()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template<typename T>
void				MutantStack<T>::operator=( MutantStack const & rhs )
{
	this->c = rhs.c;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin()
{
	return this->c.begin();
}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end()
{
	return this->c.end();
}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rbegin()
{
	return this->c.rbegin();
}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rend()
{
	return this->c.rend();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */