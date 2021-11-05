#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		Form(std::string name, int gradSign, int gradeExecute);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		const std::string	getName() const;
		int					getGradeSign() const;
		int					getGradeExecute() const;
		bool				getIsSigned() const;

		void				beSigned(Bureaucrat b);

		class				GradeTooHighException: public std::exception {
			public:
				virtual const char * what() const throw();
		};

		class				GradeTooLowException: public std::exception {
			public:
				virtual const char * what() const throw();
		};

	private:
		Form();

		const std::string	_name;
		int					_gradeSign;
		int					_gradeExecute;
		bool				_isSigned;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */