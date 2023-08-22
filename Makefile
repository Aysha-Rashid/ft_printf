NAME = libftprintf.a

SRC = ft_printf.c\
		ft_printwords.c\
		ft_numbers.c\
		ft_hexadeci.c\
		ft_pointer.c\

		
CFLAGS = -Wall -Werror -Wextra

CC = cc

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re