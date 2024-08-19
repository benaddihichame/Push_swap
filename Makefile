# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 20:30:15 by hbenaddi          #+#    #+#              #
#    Updated: 2024/08/17 22:49:45 by hbenaddi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -Iinclude  -g3
NAME = push_swap
SRC_DIR = src
OBJ_DIR = obj
CMD_DIR = cmd

SRCS = $(SRC_DIR)/init.c \
			$(SRC_DIR)/main.c \
			$(SRC_DIR)/3reverse.c \
			$(SRC_DIR)/1rotate.c \
			$(SRC_DIR)/2push.c \
			$(SRC_DIR)/4swap.c \
			$(SRC_DIR)/search.c \
			$(SRC_DIR)/algo.c \
			$(SRC_DIR)/stack.c \
			$(SRC_DIR)/utils.c \
			$(SRC_DIR)/target.c \



OBJS = $(OBJ_DIR)/init.o \
			$(OBJ_DIR)/3reverse.o \
			$(OBJ_DIR)/1rotate.o \
			$(OBJ_DIR)/2push.o \
			$(OBJ_DIR)/4swap.o \
			$(OBJ_DIR)/main.o \
			$(OBJ_DIR)/search.o \
			$(OBJ_DIR)/algo.o \
			$(OBJ_DIR)/stack.o \
			$(OBJ_DIR)/utils.o \
			$(OBJ_DIR)/target.o



LIBFT_DIR = lib
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LFLAGS) $(LIBFT)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
