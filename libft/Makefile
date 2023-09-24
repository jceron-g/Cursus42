# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 14:59:39 by jceron-g          #+#    #+#              #
#    Updated: 2023/09/22 13:06:14 by jceron-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
SOURCE = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		 ft_tolower.c ft_toupper.c ft_strchr.c ft_strlcat.c ft_strlcpy.c \
		 ft_strlen.c ft_strncmp.c ft_strrchr.c ft_atoi.c ft_memset.c ft_bzero.c \
		 ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c \
		 ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		 ft_substr.c ft_strjoin.c

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) 
	ar crs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)
		
re: fclean all

.PHONY: all clean fclean re