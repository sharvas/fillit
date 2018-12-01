# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/01 12:33:42 by dfinnis           #+#    #+#              #
#    Updated: 2018/12/01 12:33:47 by dfinnis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = algorithm.c \
		algorithm_rhythm.c \
		main.c \
		output.c \
		read_file.c \
		read_i.c \
		read_j.c \
		read_l.c \
		read_sq.c \
		read_t.c \
		read_z.c

OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra

HEADER = -I libft/

LIB = -L libft/ -lft

all: $(NAME)

$(NAME): lib
	gcc $(FLAGS) $(HEADER) -c $(SRCS) -g
	gcc $(OBJ) $(HEADER) $(LIB) -g -o $(NAME)

lib:
	@make -C libft/ all

libfclean:
	@make -C libft/ fclean

libclean:
	@make -C libft/ clean

clean: libclean
	@/bin/rm -f $(OBJ)

fclean: clean libfclean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
