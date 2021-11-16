#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>

template<typename T>
class Mutantstack: public std::stack<T>
{

	public:

		Mutantstack();
		Mutantstack( Mutantstack const & src );
		~Mutantstack();

		Mutantstack &		operator=( Mutantstack const & rhs );

		

	private:

};

#endif /* ***************************************************** MUTANTSTACK_H */