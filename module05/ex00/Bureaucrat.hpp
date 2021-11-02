#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade) throw();
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		std::string			getName() const;
		int					getGrade() const;
		void				incrementGrade() const throw();
		void				decrementGrade() const throw();

		class				GradeTooHighException: public std::exception {
			const char * what() const throw();
		};

		class				GradeTooLowException: public std::exception {
			const char * what() const throw ();
		};

	private:
		const std::string	_name;
		int					_grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */