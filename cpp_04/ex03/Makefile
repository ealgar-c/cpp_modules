# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 12:40:18 by ealgar-c          #+#    #+#              #
#    Updated: 2023/12/15 14:09:39 by ealgar-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia
CC = c++

SRC = src/main.cpp src/AMateria.cpp src/Character.cpp src/Cure.cpp src/Ice.cpp\
		src/MateriaSource.cpp
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