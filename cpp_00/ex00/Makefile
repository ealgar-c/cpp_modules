SRC = megaphone.cpp

OBJ_SRC = $(SRC:.cpp=.o)

NAME = megaphone

CC = c++
CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

all: $(NAME)
$(NAME): $(OBJ_SRC)
	$(CC) $(CPPFLAGS) $(OBJ_SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ_SRC)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re