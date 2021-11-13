# include "iter.hpp"

int main()
{
	int n = 10;

	int arr_i[n];
	char arr_c[n];
	std::string arr_s[n];

	for (int i = 0; i < n; i++)
	{
		arr_i[i] = i + 1;
		arr_c[i] = i + 33;
		arr_s[i] = static_cast<std::string>("some char : ") + arr_c[i];
	}
	std::cout << "------int------" << std::endl;
	::iter(arr_i, n, ::func);

	std::cout << "\n------char------" << std::endl;
	::iter(arr_c, n, ::func);

	std::cout << "\n------string------" << std::endl;
	::iter(arr_s, n, ::func);

	return 0;
}

// class Awesome
// {
// 	public:
// 		Awesome( void ) : _n( 42 ) { return; }
// 		int get( void ) const { return this->_n; }
// 	private:
// 		int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {
// 	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// 	Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
	
// 	return 0;
// }