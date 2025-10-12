SRC = ft_bzero.c    ft_isalpha.c    ft_strlen.c    ft_memcpy.c    ft_strjoin.c   \
      ft_strlcpy.c  ft_strdup.c     ft_substr.c    ft_strchr.c    ft_strrchr.c   \
	  ft_strtrim.c	\

OBJ = $(SRC:.c=.o)


CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: all
	$(CC) $(CFLAGS) main.c -L. -lft -o test && ./test

.PHONY: all clean fclean re bonus test
