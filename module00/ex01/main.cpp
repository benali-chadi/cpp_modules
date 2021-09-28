#include "phonebook.hpp"

int main()
{
	Phonebook phonebook;
	std::string   command;

	command = "";
	while (command.compare("EXIT") != 0)
	{
		std::cin >> command;
		if (!command.compare("ADD"))
			phonebook.add_contact();
		else if (!command.compare("SEARCH"))
			phonebook.search();
	}

}