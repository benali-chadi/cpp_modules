#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void): _fixed_point(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &inst) {
	std::cout << "Copy constructor called" << std::endl;
	*this = inst;
}

Fixed	&Fixed::operator=(Fixed const &inst) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_point = inst.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Deconstructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

const int Fixed::_fractional_bits = 8;