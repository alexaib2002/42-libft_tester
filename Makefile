# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaibar-h <aaibar-h@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 17:05:24 by aaibar-h          #+#    #+#              #
#    Updated: 2023/02/07 13:31:39 by aaibar-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = binft.bin
DEPLIB = libft.a
CC = gcc
CFLAGS = -g -lbsd -Wall -Werror -Wextra
INCLUDE = 42-libft

SRCS = $(wildcard tt_*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compiling tests binary target"
	@$(CC) $(CFLAGS) -I $(INCLUDE) -o $(NAME) $(OBJS)

$(DEPLIB):
	@make $(NAME) OUT=""

%.o: %.c
	@$(CC) $(CFLAGS) -I $(INCLUDE) -o $@ -c $<
