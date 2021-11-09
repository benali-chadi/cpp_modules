#include <iostream>

bool	is_digit(const std::string str)
{
	return str.find_first_not_of("0123456789f.") == std::string::npos;
}

void	convertToChar(const char *str)
{
	std::cout << "char : ";
	if (is_digit(str))
	{
		char c = static_cast<char>(std::atoi(str));
		if (c == 0)
 			std::cout << "Non dispalayable" << std::endl;
		else
			std::cout << c << std::endl;
	}
	else if (std::strlen(str) == 1 && std::isprint(str[0]))
		std::cout << str[0];
	else if (std::strlen(str) == 1)
		std::cout << "Non dispalayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	convertToInt(const char *str)
{
	std::cout << "int: ";
	if (is_digit(str))
		std::cout << std::atoi(str) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

int		compare(const std::string str)
{
	if (is_digit(str))
		return 1;
	if (str.compare("nan") || str.compare("nanf"))
		return 2;
	if (str.compare("-inf") || str.compare("-inff"))
		return 3;
	if (str.compare("+inf") || str.compare("+inff"))
		return 4;
	return 0;
}

void	convertToFloat(const std::string str)
{
	std::cout << "float: ";
	
	switch (compare(str))
	{
		case 1:
			std::cout << std::stof(str) << "f" << std::endl;
			break;
		case 2:
			std::cout << "nanf" << std::endl;
			break;
		case 3:
			std::cout << "-inff" << std::endl;
			break;
		case 4:
			std::cout << "+inff" << std::endl;
			break;
		default:
			std::cout << "impossible" << std::endl;
			break;
	}
}

void	convertToDouble(const std::string str)
{
	std::cout << "double: ";

	switch (compare(str))
	{
		case 1:
			std::cout << std::stod(str) << std::endl;
			break;
		case 2:
			std::cout << "nan" << std::endl;
			break;
		case 3:
			std::cout << "-inf" << std::endl;
			break;
		case 4:
			std::cout << "+inf" << std::endl;
			break;
		default:
			std::cout << "impossible" << std::endl;
			break;
	}
}

int main(int ac, char **av)
{
	double d = 5;
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	std::cout << "d = " << d << std::endl;
	if (ac > 1)
	{
		convertToChar(av[1]);
		convertToInt(av[1]);
		convertToFloat(av[1]);
		convertToDouble(av[1]);
	}
	return 0;
}