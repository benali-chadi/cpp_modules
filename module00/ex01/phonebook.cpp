#include "phonebook.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void Contact::fill_contact(void)
{
	std::string str;

	std::getline(std::cin, str);
	std::cout << "First name: ";
	std::getline(std::cin, this->_first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, this->_last_name);
	std::cout << "nickname: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, this->_phone_number);
	std::cout << "Your darkest secret: ";
	std::getline(std::cin, this->_darkest_secret);
}
std::string Contact::get_phone_number(void) { return this->_phone_number; }

std::string Contact::get_darkest_secret(void) { return this->_darkest_secret; }

std::string Contact::get_first_name(bool trun) {
	std::string str;

	if (this->_first_name.length() <= 10 || !trun)
		str = this->_first_name;
	else
	{
		str = this->_first_name.substr(0, 10);
		str[9] = '.';
	}
	return str;
}

std::string Contact::get_last_name(bool trun) {
	std::string str;

	if (this->_last_name.length() <= 10 || !trun)
		str = this->_last_name;
	else
	{
		str = this->_last_name.substr(0, 10);
		str[9] = '.';
	}
	return str;
}

std::string Contact::get_nickname(bool trun) {
	std::string str;

	if (this->_nickname.length() <= 10 || !trun)
		str = this->_nickname;
	else
	{
		str = this->_nickname.substr(0, 10);
		str[9] = '.';
	}
	return str;
}

Phonebook::Phonebook()
{
	this->num_contacts = 0;
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}

int    Phonebook::get_num_contacts(void)
{
	return this->num_contacts;
}

void    Phonebook::add_contact(void)
{
	if (this->num_contacts < 8)
	{
		this->contacts[this->num_contacts].fill_contact();
		this->num_contacts += 1;
	}
	else
		std::cout << "Can't add more contacts" << std::endl;
}

void	Phonebook::display(void)
{
	std::cout << std::setw(10) << "index";
	std::cout << '|';
	std::cout << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::setw(10) << "nickname";
	std::cout << "|" << std::endl;
	for (int i = 0; i < this->num_contacts; i++)
	{
		std::cout << std::setw(10) << i;
		std::cout << '|';
		std::cout << std::setw(10) << this->contacts[i].get_first_name(true);
		std::cout << '|';
		std::cout << std::setw(10) << this->contacts[i].get_last_name(true);
		std::cout << '|';
		std::cout << std::setw(10) << this->contacts[i].get_nickname(true);
		std::cout << '|' << std::endl;
	}
}

void	Phonebook::display_by_index(int index)
{
	std::cout << "First name:\t" << this->contacts[index].get_first_name(false) << std::endl;
	std::cout << "Last name:\t" << this->contacts[index].get_last_name(false) << std::endl;
	std::cout << "nickname:\t" << this->contacts[index].get_nickname(false) << std::endl;
	std::cout << "Phone number:\t" << this->contacts[index].get_phone_number() << std::endl;
	std::cout << "Darkest secret:\t" <<  this->contacts[index].get_darkest_secret() << std::endl;
}

bool	check_tmp(std::string tmp)
{
	for (int i = 0; tmp[i]; i++)
	{
		if (tmp[i] < '0' || tmp[i] > '9')
		{
			return 0;
		}
	}
	return 1;
}

void	Phonebook::set_index(void)
{
	std::string	tmp;
	int			index;

	std::cout << "index: ";
	std::cin >> tmp;

	std::stringstream(tmp) >> index;
	if (index >= 0 && index < num_contacts && check_tmp(tmp))
		this->display_by_index(index);
	else
	{
		std::cout << "Invalid index" << std::endl;
		if (num_contacts > 0)
			set_index();
	}
}

void    Phonebook::search(void)
{
	this->display();

	this->set_index();
}
