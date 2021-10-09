#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	private:
		int					_fixed_point;
		static const int	_fractional_bits;
	public:
		Fixed(void);
		Fixed(Fixed const &inst);
		Fixed & operator=(Fixed const &inst);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif