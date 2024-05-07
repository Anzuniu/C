# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antonio <antalvar@student.42.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/07 17:23:51 by antonio           #+#    #+#              #
#    Updated: 2024/05/07 20:11:49 by antonio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = \
	ft_printf.c\
	ft_printf_utils.c\
	ft_puthex.c\
	ft_putunnbr.c\

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Werror -Wextra

CC = gcc

$(NAME): $(OBJ)
	@$(CC) -c $(FLAGS) $(FILES)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(NAME) created!"

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@echo "clean completed!"

fclean: 
	@rm -f $(OBJ)
	@rm -f $(NAME) $(BONUS_OBJ)
	@echo "fclean completed!"

re:	fclean all

test:	
	@$(CC) $(FILES) $(FLAGS) $(NAME) -o test.out
	@echo "test created!"

$(OBJ): %.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

.PHONY: all clean fclean re
