# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaibar-h <aaibar-h@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 17:05:24 by aaibar-h          #+#    #+#              #
#    Updated: 2023/02/06 17:13:56 by aaibar-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Debug
DBG_CFLAGS = -g -lbsd

# Debug target library and sources
DBG_NAME = libft_debug.a
DBG_BIN = libft_debug.bin
DBG_TESTERS = $(wildcard $(TEST_DIR)/tt_*.c)
DBG_SRCS = $(SRCS) $(SRCS_BONUS) $(DBG_TESTERS)
DBG_OBJS = $(SRCS:.c=_debug.o)

debug: $(DBG_NAME)
	@$(CC) $(DBG_CFLAGS) -I $(INCLUDE) -o $(DBG_BIN) $(DBG_SRCS)

$(DBG_NAME): $(DBG_OBJS)
	@echo "Compiling debug target"
	@ar rcs $(DBG_NAME) $(DBG_OBJS)

%_debug.o: %.c
	@$(CC) $(DBG_CFLAGS) -o $@ -c $<
