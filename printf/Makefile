NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

C_FILES = ft_printf.c \
	  ft_putchar.c \
	  ft_puthex.c \
	  ft_putnbr.c \
	  ft_putstr.c \
	  ft_putunbr.c \
	  ft_putp.c
O_FILES = $(C_FILES:.c=.o)

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(O_FILES)
	ar -rcs $(NAME) $(O_FILES)

clean:
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
