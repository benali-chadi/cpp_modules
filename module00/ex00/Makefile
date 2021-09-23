FLAGS = -Wall -Werror -Wextra -std=c++98

C++ = clang++

NAME = megaphone

SRC = megaphone.cpp

all : $(NAME)

$(NAME) :
	$(C++) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all