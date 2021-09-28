#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include <sstream> 

class Contact {
	public:
		Contact();
		~Contact();

		void	fill_contact(void);
		std::string	get_first_name(bool trun);
		std::string	get_last_name(bool trun);
		std::string	get_nickname(bool trun);
		std::string	get_phone_number(void);
		std::string	get_darkest_secret(void);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

class Phonebook {
	public:
		Phonebook();
		~Phonebook();
	
		void	add_contact(void);
		void	search(void);
		int		get_num_contacts(void);

	private:
		Contact contacts[8];
		int		num_contacts;

		void	display(void);
		void	set_index(void);
		void	display_by_index(int index);
};

#endif