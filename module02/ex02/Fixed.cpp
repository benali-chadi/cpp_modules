#include "Fixed.hpp"

/*
	* Constructors
*/

Fixed::Fixed(void): _fixed_point(0)
{
	return ;
}

Fixed::Fixed(Fixed const &inst)
{
	*this = inst;
}

Fixed::Fixed(int const d)
{
	this->_fixed_point = d << this->_fractional_bits;
}

Fixed::Fixed(float const f)
{
	this->_fixed_point = roundf(f * (1 << this->_fractional_bits));
}

/*
	* Destructor
*/

Fixed::~Fixed()
{
	return ;
}

/*
	* Operators
*/

Fixed	&Fixed::operator=(Fixed const &inst)
{
	this->_fixed_point = inst.getRawBits();
	return *this;
}

// Arithmetic Operators

Fixed	Fixed::operator+(Fixed const &inst)
{
	Fixed fixed(this->toFloat() + inst.toFloat());
	return fixed;
}

Fixed	Fixed::operator-(Fixed const &inst)
{
	Fixed fixed(this->toFloat() - inst.toFloat());
	return fixed;
}

Fixed	Fixed::operator*(Fixed const &inst)
{
	Fixed fixed(this->toFloat() * inst.toFloat());
	return fixed;
}

Fixed	Fixed::operator/(Fixed const &inst)
{
	Fixed fixed(this->toFloat() / inst.toFloat());
	return fixed;
}

// Comparison Operators

bool	Fixed::operator>(Fixed const &inst)
{
	return this->toFloat() > inst.toFloat();
}

bool	Fixed::operator<(Fixed const &inst)
{
	return this->toFloat() < inst.toFloat();
}

bool	Fixed::operator>=(Fixed const &inst)
{
	return this->toFloat() >= inst.toFloat();
}

bool	Fixed::operator<=(Fixed const &inst)
{
	return this->toFloat() <= inst.toFloat();
}

bool	Fixed::operator==(Fixed const &inst)
{
	return this->toFloat() == inst.toFloat();
}

bool	Fixed::operator!=(Fixed const &inst)
{
	return this->toFloat() != inst.toFloat();
}

// Increment and Decrement

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_fixed_point++;
	return tmp;
}

Fixed	Fixed::operator++()
{
	++this->_fixed_point;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_fixed_point--;
	return tmp;
}

Fixed	Fixed::operator--()
{
	--this->_fixed_point;
	return *this;
}

/*
	* Raw bits Functions
*/

int		Fixed::getRawBits(void) const
{
	return this->_fixed_point;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

/*
	* Conversion Functions
*/

float	Fixed::toFloat(void) const
{
	return (float)this->_fixed_point / (float)(1 << this->_fractional_bits);
}

int		Fixed::toInt(void) const
{
	return this->_fixed_point >> this->_fractional_bits;
}

/*
	* Other
*/

std::ostream	& operator<<(std::ostream & o, Fixed const &i)
{
	o << i.toFloat();
	return o;
}

/*
	* Statics
*/

// Static Functions
Fixed &Fixed::min(Fixed &inst1, Fixed &inst2)
{
	if (inst1 < inst2)
		return inst1;
	return inst2;
}

Fixed const &Fixed::min(Fixed const &inst1, Fixed const &inst2)
{
	if ((Fixed)inst1 < inst2)
		return inst1;
	return inst2;
}

Fixed &Fixed::max(Fixed &inst1, Fixed &inst2)
{
	if (inst1 > inst2)
		return inst1;
	return inst2;
}

Fixed const &Fixed::max(Fixed const &inst1, Fixed const &inst2)
{
	if ((Fixed)inst1 > inst2)
		return inst1;
	return inst2;
}

const int Fixed::_fractional_bits = 8;
