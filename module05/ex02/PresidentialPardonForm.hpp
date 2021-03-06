#ifndef PRESIDENRIALPARDONFORM_HPP
# define PRESIDENRIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
		virtual bool					execute(Bureaucrat const & executor) const;

	private:
		std::string _target;
};


#endif /* ****************************************** PRESIDENRIALPARDONFORM_H */