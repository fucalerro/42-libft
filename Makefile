NAME = _libft
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
GCH = $(SRC:.c=.gch)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ) $(GCH)
	rm -f *.h.gch
	rm -f *.out
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
