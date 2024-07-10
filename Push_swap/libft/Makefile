NAME = libft.a

FILES = $(wildcard *.c)

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Werror -Wextra

CC = gcc

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(NAME) created!"

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@echo "Clean completed!"

fclean: clean
	@rm -f $(NAME)
	@echo "Fclean completed!"

re: fclean all

%.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

.PHONY: all clean fclean re
