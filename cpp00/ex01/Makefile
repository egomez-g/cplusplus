# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/18 11:37:18 by egomez-g          #+#    #+#              #
#    Updated: 2024/02/22 16:19:22 by egomez-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC =	phonebook.cpp	\
		contact.cpp		\
		main.cpp

CC = g++

OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	
re: fclean $(NAME)

.PHONY: all clean fclean re