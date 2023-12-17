# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/17 18:10:58 by ealgar-c          #+#    #+#              #
#    Updated: 2023/12/17 18:11:31 by ealgar-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat
CC = c++

SRC = src/main.cpp src/Bureaucrat.cpp
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