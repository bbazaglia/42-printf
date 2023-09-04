# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 10:32:51 by bbazagli          #+#    #+#              #
#    Updated: 2023/08/08 16:20:19 by bbazagli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = ft_putnbr_fd.c \
	ft_putendl_fd.c \
	ft_putstr_fd.c \
	ft_putchar_fd.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_itoa.c \
	ft_split.c \
	ft_strlen.c \
	ft_substr.c \
	ft_strdup.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_strnstr.c \
	ft_strjoin.c \
	ft_atoi.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_calloc.c \
	ft_memcpy.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_memmove.c \
	ft_memset.c \
	ft_bzero.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strncmp.c

SRC_BONUS = ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstmap_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstsize_bonus.c

OBJ = $(SRC:%.c=%.o)

OBJ_BONUS = $(SRC_BONUS:%.c=%.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)

bonus: $(OBJ_BONUS)

%.o: %.c libft.h
	cc -Wall -Wextra -Werror -c $< -o $@
	ar rc $(NAME) $@

clean: 
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus