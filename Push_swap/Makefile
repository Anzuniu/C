NAME = push_swap

LIBFT = ./libft/libft.a

FILES = \
	push.c\
	rotate.c\
	reverse_rotate.c\
	sort_three.c\
	sort.c\
	swap.c\
	handle_errors.c\
	init_nodes.c\
	push_swap.c\
	stack_utils.c

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Werror -Wextra

CC = gcc

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) -c $(FLAGS) $(FILES) $(LIBFT) -o $(NAME)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(NAME) created!"

$(LIBFT):
	@make -C ./libft

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@make clean -C ./libft
	@echo "clean completed!"

fclean: 
	clean
	@rm -f $(NAME)
	@rm -f $(LIBFT)
	@echo "fclean completed!"

re:	fclean all

$(OBJ): %.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

.PHONY: all clean fclean re bonus
