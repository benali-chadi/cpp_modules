#include <iostream>
#include <fstream>

int		read_args(char **av, std::ifstream	&org_file, 
	std::ofstream	&rep_file, std::string &s1, std::string &s2)
{
	std::string		rep_filename;

	rep_filename = av[1];
	org_file.open(rep_filename);
	rep_filename += ".replace";
	rep_file.open(rep_filename);
	s1 = av[2];
	s2 = av[3];
	if (s1 == "" || s2 == "")
	{
		std::cout << "An empty S1 or S2" << std::endl;
		return 0;
	}
	return 1;
}

void	ft_replace(std::string &line, int index, std::string s1, std::string s2)
{
	while (index >= 0)
	{
		line.erase(index, s1.length());
		line.insert(index, s2);
		index = line.find(s1);
	}
}

int main(int ac, char **av)
{
	std::ifstream	org_file;
	std::ofstream	rep_file;
	std::string		s1;
	std::string		s2;
	std::string		line;

	if (ac != 4)
	{
		std::cout << "Not enough arguments" << std::endl;
		return 1;
	}

	if (!read_args(av, org_file, rep_file, s1, s2))
		return 1;

	while (std::getline(org_file, line))
	{
		int index = line.find(s1);
		ft_replace(line, index, s1, s2);
		rep_file << line;
	}

	return 0;
}
