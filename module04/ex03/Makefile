FLAGS = -Wall -Werror -Wextra -std=c++98

C++ = clang++

NAME = Characters

SRC = main.cpp Character.cpp AMateria.cpp Cure.cpp Ice.cpp ICharacter.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(C++) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all
