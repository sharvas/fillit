//header//

NAME = fillit.a

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

INC = fillit.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ): $(SRCS)
	@gcc -c $(FLAGS) $(SRCS) -I $(INC)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
