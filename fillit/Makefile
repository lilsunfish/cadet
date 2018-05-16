# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rastle <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/09 13:19:41 by rastle            #+#    #+#              #
#    Updated: 2018/05/09 13:21:05 by rastle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

NAME = fillit

SRC = 

INCL = includes/

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -o $(NAME) 

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
