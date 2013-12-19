#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/21 15:00:21 by nvan-hou          #+#    #+#              #
#    Updated: 2013/12/19 04:11:39 by nvan-hou         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC=gcc
FLAGS=-W -Wall -Wextra -Werror -I includes
SRC=	ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strcat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strndup.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strjoin.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_itoa.c
OBJ=$(SRC:.c=.o)
NAME=
LIB=libft.a

all: $(LIB)

$(LIB): $(OBJ)
	ar -rc $@ $^

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

.PHONY: fclean clean re

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(LIB)

re: fclean all
