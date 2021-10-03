#include <iostream>
#include <fstream>

int	read_args(char **av, std::ifstream	&org_file, 
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
		for (unsigned long i = 0; i < line.length() && s1.length() < line.length(); i += s1.length())
		{
			std::string sub = line.substr(i, i + s1.length());
			if (!s1.compare(sub))
				// replace s1 by s2 in line
				for (unsigned long j = i, k = 0, l = 0;
					j < line.length() && (k < s1.length() || l < s2.length());
					j++, k++, l++)
				{
					if (k < s1.length() && l < s2.length())
						line[j] = s2[l];
					else if (k >= s1.length())
						line.insert(j, s2[l], 1);
					else if (l >= s2.length())
						line.erase(j);
				}
		}
		rep_file << line;
	}

	
	return 0;
}
