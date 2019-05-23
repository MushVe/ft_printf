# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cseguier <cseguier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 14:20:48 by cseguier          #+#    #+#              #
#    Updated: 2019/04/29 14:20:50 by cseguier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME = libftprintf.a

FILE = ft_printf.c

LIBFT = ../libft/libft.a
INC = -I libft


SRC = $(FILE:%=%)

OBJ = $(FILE:%.c=%.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc $(CFLAGS) $(INC)

all: $(NAME)

$(NAME): $(PRINTF)
		@$(CC) -c $(SRC) 
		#-L ../libft/ -lft
		@ar rcs $(NAME) $(OBJ)
		@ranlib $(NAME)

clean:
		@/bin/rm -f $(OBJ)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all