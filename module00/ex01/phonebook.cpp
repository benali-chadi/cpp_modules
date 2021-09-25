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
	st cout << "First name: ";
	st cin >> this->first_name;
	st cout << "Last name: ";
	st cin >> this->last_name;
	st cout << "Nickname: ";
	st cin >> this->nickname;
	st cout << "Phone number: ";
	st cin >> this->phone_number;
	st cout << "Your darkest secret: ";
	st cin >> this->darkest_secret;
}
st string Contact::get_phone_number(void) { return this->darkest_secret; }

st string Contact::get_darkest_secret(void) { return this->darkest_secret; }

st string Contact::get_first_name(bool trun) {
	st string str;

	if (this->first_name.length() <= 10 || !trun)
		str = this->first_name;
	else
	{
		str = this->first_name.substr(0, 10);
		str[9] = '.';
	}
	return str;
}

st string Contact::get_last_name(bool trun) {
	st string str;

	if (this->last_name.length() <= 10 || !trun)
		str = this->last_name;
	else
	{
		str = this->last_name.substr(0, 10);
		str[9] = '.';
	}
	return str;
}

st string Contact::get_nickname(bool trun) {
	st string str;

	if (this->nickname.length() <= 10 || !trun)
		str = this->nickname;
	else
	{
		str = this->nickname.substr(0, 10);
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
		st cout << "Can't add more contacts" << st endl;
}

void	Phonebook::display(void)
{
	st cout << st setw(10) << "index";
	st cout << '|';
	st cout << st setw(10) << "first name";
	st cout << "|";
	st cout << st setw(10) << "last name";
	st cout << "|";
	st cout << st setw(10) << "nickname";
	st cout << "|" << st endl;
	for (int i = 0; i < this->num_contacts; i++)
	{
		st cout << st setw(10) << i;
		st cout << '|';
		st cout << st setw(10) << this->contacts[i].get_first_name(true);
		st cout << '|';
		st cout << st setw(10) << this->contacts[i].get_last_name(true);
		st cout << '|';
		st cout << st setw(10) << this->contacts[i].get_nickname(true);
		st cout << '|' << st endl;
	}
}

void	Phonebook::display_by_index(int index)
{
	st cout << "First name:\t" << this->contacts[index].get_first_name(false) << st endl;
	st cout << "Last name:\t" << this->contacts[index].get_last_name(false) << st endl;
	st cout << "Nickname:\t" << this->contacts[index].get_nickname(false) << st endl;
	st cout << "Phone number:\t" << this->contacts[index].get_phone_number() << st endl;
	st cout << "Darkest secret:\t" <<  this->contacts[index].get_darkest_secret() << st endl;
}

void	Phonebook::set_index(void)
{
	st string	tmp;
	int			index;

	st cout << "index: ";
	st cin >> tmp;

	st stringstream(tmp) >> index;
	if (index >= 0 && index < num_contacts)
		this->display_by_index(index);
	else
	{
		st cout << "Invalid index" << st endl;
		if (num_contacts > 0)
			set_index();
	}
}

void    Phonebook::search(void)
{
	this->display();

	this->set_index();
}
