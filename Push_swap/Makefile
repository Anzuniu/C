NAME = push_swap

LIBFT = ./libft/libft.a

FILES = \
	handle_errors.c \
	init_a_to_b.c \
	init_b_to_a.c \
	push.c \
	push_swap.c \
	rev_rotate.c \
	rotate.c \
	sort_stacks.c \
	sort_three.c \
	split.c \
	stack_init.c \
	stack_utils.c \
	swap.c 

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Werror -Wextra -g

CC = gcc

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "$(NAME) created!"

$(LIBFT):
	@make -C ./libft

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@make clean -C ./libft > /dev/null 2>&1 || true
	@echo "clean completed!"

RM = rm -f

fclean: clean
	@rm -f $(NAME)
	@make fclean -C ./libft > /dev/null 2>&1 || true
	@echo "fclean completed!"

re: fclean all

%.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

.PHONY: all clean fclean re
