# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 12:33:46 by ealgar-c          #+#    #+#              #
#    Updated: 2023/12/13 12:52:29 by ealgar-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorph
CC = c++

SRC = src/main.cpp src/Animal.cpp src/Cat.cpp src/Dog.cpp src/WrongAnimal.cpp src/WrongCat.cpp
CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

OBJ_SRC = $(SRC:.cpp=.o)


all: $(NAME)
$(NAME): $(OBJ_SRC)
	$(CC) $(CPPFLAGS) $(OBJ_SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ_SRC)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re