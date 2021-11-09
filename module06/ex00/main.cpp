# include <iostream>
# include <iomanip>
# include <climits>
# include <cfloat>

bool	is_digit(const std::string str)
{
	return str.find_first_not_of("0123456789f.-") == std::string::npos;
}

void	convertToChar(const std::string str)
{
	std::cout << "char : ";
	if (is_digit(str))
	{
		char c = static_cast<char>(std::stoi(str));
		if (c < 32 || c > 126)
 			std::cout << "Non dispalayable" << std::endl;
		else
			std::cout << c << std::endl;
	}
	else if (str.size() == 1 && std::isprint(str[0]))
		std::cout << str[0];
	else if (str.size() == 1)
		std::cout << "Non dispalayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	convertToInt(const std::string str)
{
	std::cout << "int: ";

	if (is_digit(str))
	{
		long long n = std::stol(str);
		if (n <= INT_MAX && n >= INT_MIN)
			std::cout << std::stoi(str) << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

int		compare(const std::string str, bool is_float)
{
	if (is_digit(str))
	{
		if (is_float)
		{
			float f = std::stof(str);
			if (f > FLT_MAX || f < -FLT_MAX)
				return 0;
		}
		else
		{
			double d = std::stod(str);
			if (d > DBL_MAX || d < -DBL_MAX)
				return 0;
		}
		return 1;
	}
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
	
	switch (compare(str, 1))
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

	switch (compare(str, 0))
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
	std::string test;
	std::cout << std::setprecision(1) << std::fixed;
	if (ac > 1)
	{
		convertToChar(static_cast<std::string>(av[1]));
		convertToInt(static_cast<std::string>(av[1]));
		convertToFloat(static_cast<std::string>(av[1]));
		convertToDouble(static_cast<std::string>(av[1]));
	}
	return 0;
}