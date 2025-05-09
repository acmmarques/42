# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/17 14:49:08 by andcardo          #+#    #+#              #
#    Updated: 2025/04/21 18:01:15 by andcardo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
# Não se pode usar wildcard. É preciso especificar todos os ficheiros a serem usados.
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)
CC=cc
CFLAGS=-Wall -Werror -Wextra
RM=rm -f
TEST=test.c

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: $(TEST)
	$(CC) $(CFLAGS) $(SRCS) -g -o exec

.PHONY: all re fclean clean