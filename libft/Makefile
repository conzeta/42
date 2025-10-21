# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 19:15:10 by lduran-f          #+#    #+#              #
#    Updated: 2025/10/21 19:15:14 by lduran-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDE = libft.h

SRC = ft_bzero.c    ft_isalpha.c    ft_strlen.c    ft_memcpy.c    ft_strjoin.c    \
      ft_strlcpy.c  ft_strdup.c     ft_substr.c    ft_strchr.c    ft_strrchr.c    \
	  ft_strtrim.c	ft_itoa.c		ft_split.c	   ft_toupper.c	  ft_strmapi.c    \
	  ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
	  ft_isdigit.c  ft_isalnum.c	ft_isascii.c   ft_isprint.c   ft_memset.c     \
	  ft_memmove.c  ft_strlcat.c	ft_tolower.c   ft_strncmp.c	  ft_memchr.c	  \
	  ft_memcmp.c	ft_strnstr.c	ft_atoi.c	   ft_calloc.c	  

OBJ = $(SRC:.c=.o)

BONUS = ft_lstadd_back_bonus.c   ft_lstclear_bonus.c   ft_lstiter_bonus.c         \
        ft_lstmap_bonus.c        ft_lstsize_bonus.c    ft_lstadd_front_bonus.c    \
		ft_lstdelone_bonus.c     ft_lstlast_bonus.c    ft_lstnew_bonus.c  

BONUS_OBJ = $(BONUS:.c=.o)

BONUS_CACHE = bonus.cache

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

$(BONUS_CACHE): $(BONUS_OBJ) $(OBJ) $(INCLUDE)
	touch $(BONUS_CACHE)
	ar -rcs $(NAME) $(OBJ) $(BONUS_OBJ)

bonus : $(BONUS_CACHE)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)
	rm -f $(BONUS_CACHE)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: all
	$(CC) $(CFLAGS) main.c -L. -lft -o test && ./test && rm -f test


.PHONY: all clean fclean re bonus test
