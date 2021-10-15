#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					_fixed_point;
		static const int	_fractional_bits;

	public:
		Fixed(void);
		Fixed(Fixed const &inst);
		Fixed(int const d);
		Fixed(float const f);

		Fixed & operator=(Fixed const &inst);

		Fixed	operator+(Fixed const &inst);
		Fixed	operator-(Fixed const &inst);
		Fixed	operator*(Fixed const &inst);
		Fixed	operator/(Fixed const &inst);

		bool	operator>(Fixed const &inst);
		bool	operator<(Fixed const &inst);
		bool	operator>=(Fixed const &inst);
		bool	operator<=(Fixed const &inst);
		bool	operator==(Fixed const &inst);
		bool	operator!=(Fixed const &inst);

		Fixed	operator++(int);
		Fixed	operator++();
		Fixed	operator--(int);
		Fixed	operator--();

		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed &min(Fixed &inst1, Fixed &inst2);
		static const Fixed &min(Fixed const &inst1, Fixed const &inst2);
		static Fixed &max(Fixed &inst1, Fixed &inst2);
		static const Fixed &max(Fixed const &inst1, Fixed const &inst2);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif