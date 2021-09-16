# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/06 22:11:10 by arbernar          #+#    #+#              #
#    Updated: 2021/09/16 03:11:16 by arbernar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcat.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_memchr.c \
		ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c

BONUS_SRC = 

CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJ := $(SRC:%.c=%.o)

BONUS_OBJ := $(BONUS_SRC:%.c=%.o)

all:	$(NAME)

$(NAME):$(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -rf *.o
	rm -rf ./a.out

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

bonus:
	$(CC) $(CFLAGS) -c $(BONUS_SRC)
	ar -rcs $(NAME) $(BONUS_OBJ)

.PHONY:	all clean fclean re bonus
