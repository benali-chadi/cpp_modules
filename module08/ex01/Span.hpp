#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <stdexcept>

class Span
{

	public:

		Span( unsigned int N );
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void				addNumber( int num );
		int					shortestSpan( void );
		int					longestSpan( void );
		std::vector<int>	getArr( void );
		int					getN( void );

	private:
		Span();
		int					_n;
		std::vector<int>	_arr;

};

#endif /* ************************************************************ SPAN_H */