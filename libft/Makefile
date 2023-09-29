# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 14:59:39 by jceron-g          #+#    #+#              #
#    Updated: 2023/09/29 11:02:27 by jceron-g         ###   ########.fr        #
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
		 ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_striteri.c ft_strmapi.c \
		 ft_split.c
		 
SOURCE_B = ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJECTS = $(SOURCE:.c=.o)

OBJECTS_B = $(SOURCE_B:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) 
	ar crs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJECTS_B)
		ar crs $(NAME) $(OBJECTS_B)

clean:
		rm -f $(OBJECTS) $(OBJECTS_B)

fclean: clean
		rm -f $(NAME) bonus
		
re: fclean all

.PHONY: all bonus clean fclean re