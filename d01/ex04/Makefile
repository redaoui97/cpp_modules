# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 13:42:33 by rnabil            #+#    #+#              #
#    Updated: 2023/06/07 16:02:49 by rnabil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Sed_is_for_losers
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
HEADER	= $(wildcard *.hpp)

MAIN	= main 

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