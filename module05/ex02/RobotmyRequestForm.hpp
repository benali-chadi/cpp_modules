#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include <iostream>
# include <string>

class RobotmyRequestForm
{

	public:

		RobotmyRequestForm();
		RobotmyRequestForm( RobotmyRequestForm const & src );
		~RobotmyRequestForm();

		RobotmyRequestForm &		operator=( RobotmyRequestForm const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, RobotmyRequestForm const & i );

#endif /* ********************************************** ROBOTMYREQUESTFORM_H */