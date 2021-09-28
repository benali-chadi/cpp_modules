FLAGS = -Wall -Werror -Wextra -std=c++98

C++ = clang++

NAME = Zombie

SRC = main.cpp Zombie.cpp ZombieHorde.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(C++) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all
