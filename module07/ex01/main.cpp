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