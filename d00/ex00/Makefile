# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 11:49:56 by rnabil            #+#    #+#              #
#    Updated: 2023/05/27 21:16:17 by rnabil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
HEADER	= $(wildcard *.hpp)

MAIN	= megaphone

SRC		= $(MAIN:=.cpp)
OBJ		= $(MAIN:=.o)

.PHONY: all clean fclean re

all: $(NAME)
	
$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(HEADER) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all