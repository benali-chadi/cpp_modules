#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define st std::
#include <iostream>


class Contact {
	public:
		Contact();
		~Contact();

		void	fill_contact(void);
		st string	get_first_name(void);
		st string	get_last_name(void);
		st string	get_nickname(void);

	private:
		st string	first_name;
		st string	last_name;
		st string	nickname;
		st string	phone_number;
		st string	darkest_secret;
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
};

#endif