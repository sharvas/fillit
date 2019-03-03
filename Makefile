# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/01 12:33:42 by dfinnis           #+#    #+#              #
#    Updated: 2018/12/02 17:17:38 by svaskeli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Werror -Wextra

SRCS_DIR = srcs/
OBJS_DIR = objs/

INC = includes/
HEADER = $(INC)fillit.h

LIBFT = libft
LIBFT_A = $(LIBFT)/libft.a

SRCS_FILES = algorithm.c algorithm_rhythm.c main.c output.c \
		read_file.c read_i.c read_j.c read_l.c read_sq.c \
		read_t.c read_z.c

SRCS_PATH = $(SRCS_FILES:%=$(SRCS_DIR)%)

OBJS = $(SRCS_FILES:%.c=%.o)
OBJS_PATH = $(addprefix $(OBJS_DIR), $(OBJS))

GREEN = "\033[0;32m"
RED = "\033[0;31m"
DEFAULT = "\033[0m"

all: comp_libft $(NAME)

comp_libft:
	@echo "Compiling:" $(GREEN) Libft $(DEFAULT)
	make -C $(LIBFT)

norm:
	norminette $(INC) $(SRCS_DIR)

$(NAME): $(LIBFT_A) $(OBJS_DIR) $(OBJS_PATH)
	@echo "Compiling:" $(GREEN) $(NAME) $(DEFAULT)
	gcc $(FLAGS) $(OBJS_PATH) $(LIBFT_A) -o $(NAME) -I $(LIBFT) -I $(INC)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c $(HEADER)
	@echo "Compiling:" $(GREEN) $< $(DEFAULT)
	gcc $(FLAGS) -c $< -o $@ -I $(INC)

clean:
	@make -C $(LIBFT)/ clean
	@rm -rf $(OBJS_DIR)

fclean:
	@make -C $(LIBFT)/ fclean
	@rm -rf $(OBJS_DIR) $(NAME)

re: fclean all

.PHONY: all comp_libft norm clean fclean re g fsanitize
