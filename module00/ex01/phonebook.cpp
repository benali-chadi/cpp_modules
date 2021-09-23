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

st string Contact::get_first_name(void) { return this->first_name; }
st string Contact::get_last_name(void) { return this->last_name; }
st string Contact::get_nickname(void) { return this->nickname; }

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
	if (this->num_contacts < 7)
	{
		this->contacts[this->num_contacts].fill_contact();
		this->num_contacts += 1;
	}
	else
		st cout << "Can't add more contacts" << st endl;
}

void    Phonebook::search(void)
{
	// 4 columns
	// Each column must be 10 chars wide
	// Printf first columns
	st cout << "index" << st string(5, ' ') << '|';
	st cout << "first name" << "|";
	st cout << "last name" << " |";
	st cout << "nickname" << "  |" << st endl;
	for (int i = 0; i < this->num_contacts; i++)
	{
		st cout << i << st string(9, ' ') << '|';
		st cout << this->contacts[i].get_first_name() << '|';
		st cout << this->contacts[i].get_last_name() << '|';
		st cout << this->contacts[i].get_nickname() << '|' << st endl;
	}
}