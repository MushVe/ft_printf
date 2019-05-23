# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cseguier <cseguier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/04 13:00:08 by cseguier          #+#    #+#              #
#    Updated: 2019/04/11 18:23:04 by cseguier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf

LIBFT = libft/libft.a
PRINTF = libftprintf/libftprintf.a

FILE = main.c

INC = -I libft -I libftprintf

SRC = $(FILE:%=%)
OBJ = $(FILE:%.c=objs/%.o)

FLAG = -Wall -Werror -Wextra
CC = gcc $(FLAG) $(INC)

RM = rm -f

all: $(NAME)

$(NAME) : $(LIBFT) $(PRINTF) $(OBJ)
		@$(CC) -o $@ $(OBJ) -L libft/ -lft -L libftprintf/ -lft

$(LIBFT) :
		@make -C libft/ all

$(PRINTF) :
		@make -C libftprintf/ all

objs/%.o: %.c
		@mkdir -p objs
		@$(CC) $(INC) -o $@ -c $<

clean:
		@$(RM) $(OBJ)
		@rm -df objs
		@make -C libft/ clean
		@make -C libftprintf/ clean

fclean: clean
		@$(RM) $(NAME)
		@make -C libft/ fclean
		@make -C libftprintf/ fclean

re: fclean all

.PHONY: all clean fclean re
