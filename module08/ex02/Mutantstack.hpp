#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <stack>

template<typename T>
class Mutantstack: public std::stack<T>
{

	public:

		Mutantstack();
		Mutantstack( Mutantstack const & src );
		~Mutantstack();

		void		operator=( Mutantstack const & rhs );

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

		iterator begin();
		iterator end();
		reverse_iterator rbegin();
		reverse_iterator rend();
		

	private:

};

#endif /* ***************************************************** MUTANTSTACK_H */