# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* c = new WrongCat();
	WrongCat *wrC = new WrongCat();

	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;

	std::cout << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	c->makeSound();
	wrC->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete c;
	delete wrC;

	return 0;
}