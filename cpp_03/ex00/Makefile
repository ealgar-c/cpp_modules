# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 12:49:58 by ealgar-c          #+#    #+#              #
#    Updated: 2023/12/07 12:50:14 by ealgar-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CC = c++

SRC = src/main.cpp src/ClapTrap.cpp
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