# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 13:27:12 by bbazagli          #+#    #+#              #
#    Updated: 2023/09/06 13:27:19 by bbazagli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

MANDATORY_SRC = ft_printf.c ft_printf_utils.c

MANDATORY_OBJ = $(MANDATORY_SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(MANDATORY_OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@
	ar rcs $(NAME) $@

clean:
	rm -f $(MANDATORY_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 

