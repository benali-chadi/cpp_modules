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

		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif