# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 20:30:15 by hbenaddi          #+#    #+#              #
#    Updated: 2024/07/15 18:27:09 by hbenaddi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -Iinclude -g3
NAME = push_swap
SRC_DIR = src
OBJ_DIR = obj
CMD_DIR = cmd

SRCS = $(SRC_DIR)/handle_err.c \
			$(SRC_DIR)/main.c \
			$(SRC_DIR)/reverse.c \
			$(SRC_DIR)/rotate.c \
			$(SRC_DIR)/push.c \
			$(SRC_DIR)/swap.c \
			$(SRC_DIR)/search.c \
			$(SRC_DIR)/utils.c


OBJS = $(OBJ_DIR)/handle_err.o \
			$(OBJ_DIR)/reverse.o \
			$(OBJ_DIR)/rotate.o \
			$(OBJ_DIR)/push.o \
			$(OBJ_DIR)/swap.o \
			$(OBJ_DIR)/main.o \
			$(OBJ_DIR)/search.o \
			$(OBJ_DIR)/utils.o



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