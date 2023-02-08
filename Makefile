# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaibar-h <aaibar-h@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 17:05:24 by aaibar-h          #+#    #+#              #
#    Updated: 2023/02/08 17:46:38 by aaibar-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = binft.bin
DEPLIB = libft.a
LIBDIR = 42-libft
CC = gcc
CFLAGS = -g -lbsd -Wall -Werror -Wextra
INCLUDE = $(LIBDIR)

SRCS = $(wildcard tt_*.c)
OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

clean:
	@rm -f $(OBJS) $(DEPLIB)

fclean: clean
	@rm -f $(NAME)

re: fclean all

$(NAME): $(OBJS) $(DEPLIB)
	@echo "Compiling tests binary target"
	@$(CC) $(CFLAGS) -I $(INCLUDE) -o $(NAME) $(OBJS) $(DEPLIB)

$(DEPLIB):
	- cd $(LIBDIR) && make $(DEPLIB) OUT=".." bonus

%.o: %.c
	@$(CC) $(CFLAGS) -I $(INCLUDE) -o $@ -c $<
