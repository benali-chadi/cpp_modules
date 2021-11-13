#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	public:
		
		/* Contructors and Destructors */

		Array(): _size(0) { _arr = new T[0]; }
		Array( unsigned int n ): _size(n) { _arr = new T[n]; }
		Array( Array const & c )
		{ 
			*this = c;
		}

		~Array() { delete [] this->_arr; }

		/* Operators */

		Array &			operator=( Array const & rhs )
		{
			this->_size = rhs.size();
			this->_arr = rhs.get_arr();

			return *this;
		}

		T &			operator[]( size_t index )
		{
			if (index >= this->_size)
				throw Array::OutOfLimit();
			
			return this->_arr[index];
		}

		/* Accessors */

		size_t		size(void) { return this->_size; }
		T			*get_arr(void)
		{
			T		*ret = new T[this->size()];

			for (int i = 0; i < this->size(); i++)
				ret[i] = _arr[i];

			return ret;
		}

		/* Exceptions */
		
		class		OutOfLimit: public std::exception {
			public:
				virtual const char *what() const throw()
				{
					return "OutOfLimit";
				}
		};

	private:
		T		*_arr;
		size_t	_size;
};


#endif