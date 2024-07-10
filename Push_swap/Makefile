NAME = push_swap

LIBFT = ./libft/libft.a
FT_PRINTF = ./ft_printf/ft_printf.a

FILES = \
	push.c \
	rotate.c \
	reverse_rotate.c \
	sort.c \
	sort_utils.c \
	swap.c \
	handle_errors.c \
	init_nodes.c \
	push_swap.c \
	stacks_utils.c

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Werror -Wextra

CC = gcc

$(NAME): $(OBJ) $(LIBFT) $(FT_PRINTF)
	@$(CC) $(FLAGS) $(OBJ) $(LIBFT) $(FT_PRINTF) -o $(NAME)
	@echo "$(NAME) created!"

$(LIBFT):
	@make -C ./libft

$(FT_PRINTF):
	@make -C ./ft_printf

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@make clean -C ./libft
	@make clean -C ./ft_printf
	@echo "clean completed!"

RM = rm -f

fclean: clean
	@rm -f $(NAME)
	@make fclean -C ./libft
	@make fclean -C ./ft_printf
	@echo "fclean completed!"

re: fclean all

%.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

.PHONY: all clean fclean re
