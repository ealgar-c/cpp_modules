# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 17:45:45 by ealgar-c          #+#    #+#              #
#    Updated: 2024/03/10 20:16:23 by ealgar-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever
CC = c++

SRC_DIR = src
OBJ_DIR = objs

SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@ $(CC) $(CPPFLAGS) $^ -o $@
	@ echo $(NAME) compiled

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@ $(CC) $(CPPFLAGS) -c $< -o $@

$(OBJ_DIR):
	@ mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
