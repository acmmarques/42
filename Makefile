# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/17 14:49:08 by andcardo          #+#    #+#              #
#    Updated: 2025/04/17 14:53:07 by andcardo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = $(wildcard *.c)

OBJS = ${SRCS: .c=.o}

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all: $(NAME)

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
