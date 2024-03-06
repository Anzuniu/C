#Macros

NAME = ft_atoi, ft_l
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_atoi.c
OBJ = $(SRC: .c = .o)

#Comandos

all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(NAME)

clean: $(RM) $(OBJ)

fclean: $(RM) $(OBJ) $(NAME)

re: fclean all