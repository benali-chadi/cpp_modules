#include "Fixed.hpp"

Fixed::Fixed(void): _fixed_point(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &inst) {
	std::cout << "Copy constructor called" << std::endl;
	*this = inst;
}

Fixed::Fixed(int const d)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = d << this->_fractional_bits;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point = roundf(f * (1 << this->_fractional_bits));
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
	return this->_fixed_point;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_fixed_point / (float)(1 << this->_fractional_bits);
}

int		Fixed::toInt(void) const
{
	return this->_fixed_point >> this->_fractional_bits;
}

std::ostream	& operator<<(std::ostream & o, Fixed const &i)
{
	o << i.toFloat();
	return o;
}

const int Fixed::_fractional_bits = 8;