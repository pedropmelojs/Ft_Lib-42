CC=cc
CFLAGS= -Wall -Wextra -Werror

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_strlen.c ft_memcpy.c ft_memmove.c ft_strlcat.c

OBJ = $(SRC:.c=.o)
NAME = libft.a

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
re: fclean all
	
.PHONY : all clean fclean re
