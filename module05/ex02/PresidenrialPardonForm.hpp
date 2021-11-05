#ifndef PRESIDENRIALPARDONFORM_HPP
# define PRESIDENRIALPARDONFORM_HPP

# include <iostream>
# include <string>

class PresidenrialPardonForm
{

	public:

		PresidenrialPardonForm();
		PresidenrialPardonForm( PresidenrialPardonForm const & src );
		~PresidenrialPardonForm();

		PresidenrialPardonForm &		operator=( PresidenrialPardonForm const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, PresidenrialPardonForm const & i );

#endif /* ****************************************** PRESIDENRIALPARDONFORM_H */