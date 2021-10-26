FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

C++ = clang++

NAME = Animals2

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(C++) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all
