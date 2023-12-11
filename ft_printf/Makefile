# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 09:46:47 by jceron-g          #+#    #+#              #
#    Updated: 2023/12/11 13:03:47 by jceron-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
SOURCE = ft_putchar.c ft_putstr.c ft_putnbr_base.c ft_printf.c

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