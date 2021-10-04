#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen karen;
	if (ac > 1)
		karen.complain(av[1]);
	return 0;
}
