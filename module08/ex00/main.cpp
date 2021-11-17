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
		easyfind(v, 2);
		easyfind(lst, 5);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		easyfind(v, 9);
		easyfind(lst, 15);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}