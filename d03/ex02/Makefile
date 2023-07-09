# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/24 15:53:13 by rnabil            #+#    #+#              #
#    Updated: 2023/07/09 01:28:31 by rnabil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= FragTrap
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
HEADER	= $(wildcard *.hpp)

MAIN	= main ClapTrap ScavTrap FragTrap

SRC		= $(MAIN:=.cpp)
OBJ		= $(MAIN:=.o)

.PHONY: all clean fclean re

all: $(NAME)
	
$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all