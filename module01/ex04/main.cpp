#include <iostream>
#include <fstream>

int		read_args(char **av, std::ifstream	&org_file, 
	std::ofstream	&rep_file, std::string &s1, std::string &s2)
{
	std::string		rep_filename;

	rep_filename = av[1];
	org_file.open(rep_filename.c_str());
	if (!org_file)
	{
		std::cout << "File does not exist" << std::endl;
		return 0;
	}
	rep_filename += ".replace";
	rep_file.open(rep_filename.c_str());
	s1 = av[2];
	s2 = av[3];
	if (s1 == "" || s2 == "")
	{
		std::cout << "An empty S1 or S2" << std::endl;
		return 0;
	}
	return 1;
}

void	replace(std::ofstream &rep_file, std::string &line, std::string s1, std::string s2)
{
	int index = line.find(s1);
	while (index >= 0)
	{
		line.erase(index, s1.length());
		line.insert(index, s2);
		index = line.find(s1);
	}
	rep_file << line << '\n';
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
		replace(rep_file, line, s1, s2);

	return 0;
}
