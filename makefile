CC=cc
CFLAGS= -Wall -Wextra -Werror

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_strlen.c ft_memcpy.c

OBJ = ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memset.o ft_strlcpy.o ft_strlen.o ft_memcpy.o

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
