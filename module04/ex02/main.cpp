# include "Cat.hpp"
# include "Dog.hpp"
# include "Brain.hpp"

int main()
{
	int n = 6;
	const Animal *animals[n];

	for (int i = 0; i < n; i++)
	{
		if (i < n / 2)
		{
			animals[i] = new Cat();
			std::cout << std::endl;
		}
		else
		{
			animals[i] = new Dog();
			std::cout << std::endl;
		}
	}

	{
		std::cout << std::endl;
		Dog tmp;
		Cat tmp2;

		tmp = *((Dog *)animals[4]);
		tmp2 = *((Cat *) animals[0]);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < n; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}
	
	return 0;
}
