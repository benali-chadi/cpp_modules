FLAGS = -Wall -Werror -Wextra -std=c++98

C++ = clang++

NAME = Mutantstack

SRC = mutantstack.cpp main.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(C++) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all
