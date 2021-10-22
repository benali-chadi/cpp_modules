#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const & rhs );
		void			makeSound() const;

		void			setType(std::string const type);
		std::string		getType(void) const;

	protected:
		std::string type;

};

#endif /* ********************************************************** WRONGAnimal_H */