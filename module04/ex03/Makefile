FLAGS = -Wall -Werror -Wextra -std=c++98

C++ = clang++

NAME = Characters

SRC = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(C++) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all
