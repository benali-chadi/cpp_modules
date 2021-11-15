#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span( unsigned int N): _n(N)
{
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	this->_arr = static_cast<Span>(rhs).getArr();
	this->_n = static_cast<Span>(rhs).getN();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void				Span::addNumber( int num)
{
	if (this->_arr.size() >= static_cast<unsigned long>(this->_n))
		throw std::out_of_range("out of range");
	this->_arr.push_back(num);
}

int					randomNumber(int max, int min) { return std::rand() % (max - min + 1); }

void				Span::addNumber( int min, int max )
{
	if (this->_arr.size() >= static_cast<unsigned long>(this->_n))
		throw std::out_of_range("out of range");

	std::srand (unsigned (std::time(0) ) );
	for (int i = this->_arr.size() - 1; i < this->_n; i++)
		this->_arr.push_back(randomNumber(max, min));
}

int					Span::longestSpan( void )
{
	if (this->_arr.size() < 2)
		throw std::invalid_argument("the array is either empty or has only one element");

	return *std::max_element(this->_arr.begin(), this->_arr.end()) - *std::min_element(this->_arr.begin(), this->_arr.end());
}

int					Span::shortestSpan( void )
{
	if (this->_arr.size() < 2)
		throw std::invalid_argument("the array is either empty or has only one element");

	std::vector<int> sorted_arr = this->getArr();
	std::sort(sorted_arr.begin(), sorted_arr.end());

	return sorted_arr[1] - sorted_arr[0];
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::vector<int>	Span::getArr( void )
{
	std::vector<int> tmp(this->_arr.size());

	std::copy(this->_arr.begin(), this->_arr.end(), tmp.begin());
	return tmp;
}

int					Span::getN( void )
{
	return this->_n;
}

/* ************************************************************************** */