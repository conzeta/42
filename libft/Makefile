SRC = ft_bzero.c  ft_isalpha.c  ft_strlen.c \

OBJ = $(SRC:.c=.o)


CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	cc $(CFLAGS) -c -o $@ $<



clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus