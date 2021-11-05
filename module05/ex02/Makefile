FLAGS = -Wall -Werror -Wextra -std=c++98

C++ = clang++

NAME = BureaucratForm

SRC = Bureaucrat.cpp main.cpp Form.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(C++) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all
