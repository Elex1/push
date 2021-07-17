# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/14 14:13:17 by melghoud          #+#    #+#              #
#    Updated: 2021/07/17 12:07:38 by melghoud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS = push_swap.c src/ft_atoi.c src/initialisation.c	\
		src/print.c src/operations.c src/sort.c src/sort_suivi.c \
		src/operations2.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all