#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::vector<int> v;
	std::list<int> lst;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
		lst.push_back(i + 1);
	}

	try {
		std::cout << easyfind(v, 2) << std::endl;
		std::cout << easyfind(lst, 5) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(v, 9) << std::endl;
		std::cout << easyfind(lst, 15) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}