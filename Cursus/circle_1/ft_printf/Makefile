NAME = libftprint.a

FILES = \

BONUS_FILE = \

OBJ = $(FILES:.c=.o)

BONUS_OBJ = $(BONUS_FILE:.c=.o)

FLAGS = -Wall -Werror -Wextra

CC = gcc

$(NAME): $(OBJ)
	@$(CC) -c $(FLAGS) $(FILES)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(NAME) created!"

all: $(NAME)

bonus: $(BONUS_OBJ)
	@gcc -c $(FLAGS) $(BONUS_FILE)
	@ar rcs $(NAME) $(BONUS_OBJ)
	@echo "Bonus library $(NAME) created!"

clean:
	@rm -f $(OBJ)
	@echo "clean completed!"

fclean: 
	@rm -f $(OBJ)
	@rm -f $(NAME) $(BONUS_OBJ)
	@echo "fclean completed!"

re:	fclean all

$(OBJ): %.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

.PHONY: all clean fclean re bonus
