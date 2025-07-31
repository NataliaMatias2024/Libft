# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namatias <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/22 19:25:38 by namatias          #+#    #+#              #
#    Updated: 2025/07/24 17:42:56 by namatias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                            Variaveis / Variables                             #
################################################################################

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

FILESC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		 ft_toupper.c ft_tolower.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		 ft_strnstr.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strdup.c \
		 ft_calloc.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c \
		 ft_memchr.c ft_memcmp.c ft_atoi.c ft_substr.c


FILESO = $(FILESC:.c=.o)

################################################################################
#                             Funções / Functions                              #
################################################################################

all: $(NAME)

$(NAME): $(FILESO)
	ar rcs $(NAME) $(FILESO)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(FILESO)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean 
	$(MAKE) all

.PHONY: all clean fclean re
