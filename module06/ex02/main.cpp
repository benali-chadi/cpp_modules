# include <iostream>
# include <cstdlib>
# include <ctime>

class Base { public: virtual ~Base(){} };
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base	*generate(void)
{ 
	Base	*ptr[] = {
		new A(),
		new B(),
		new C()
	};
	int		index = std::rand() % 3;

	for (int i = 0; i < 3; i++)
		if (i != index)
			delete ptr[i];

	return ptr[index];
}

void	identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	
	B *b = dynamic_cast<B *>(p);
	if (b != NULL)
		std::cout << "B" << std::endl;
	
	C *c = dynamic_cast<C *>(p);
	if (c != NULL)
		std::cout << "C" << std::endl;

}

void	identify(Base &p)
{
	try  {
		A &a = dynamic_cast<A &>(p);
		a = static_cast<A &>(a);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {}

	try  {
		B &b = dynamic_cast<B &>(p);
		b = static_cast<B &>(b);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e) {}

	try  {
		C &c = dynamic_cast<C &>(p);
		c = static_cast<C &>(c);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e) {}
}

int main()
{
	std::srand(std::time(NULL));

	Base *ptr = generate();

	identify(ptr);
	identify(*ptr);
	return 0;
}