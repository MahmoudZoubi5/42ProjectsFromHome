NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

C_FILES = ft_atoi.c \
	  ft_lstdelone.c \
	  ft_putendl_fd.c \
	  ft_strncmp.c \
	  ft_bzero.c \
	  ft_lstiter.c \
	  ft_putnbr_fd.c \
	  ft_strnstr.c \
	  ft_calloc.c \
	  ft_lstlast.c \
	  ft_putstr_fd.c \
	  ft_strrchr.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_lstmap.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_lstnew.c \
	  ft_strchr.c \
	  ft_substr.c \
	  ft_tolower.c \
	  ft_strdup.c \
	  ft_lstsize.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_memchr.c \
	  ft_striteri.c \
	  ft_toupper.c \
	  ft_strjoin.c \
	  ft_memcmp.c \
	  ft_isprint.c \
	  ft_itoa.c \
	  ft_memcpy.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_memmove.c \
	  ft_lstadd_back.c \
	  ft_lstadd_front.c \
	  ft_memset.c \
	  ft_strlen.c \
	  ft_strmapi.c \
	  ft_putchar_fd.c \
	  ft_lstclear.c
O_FILES:= $(C_FILES:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(O_FILES)
	ar -rcs $@ $^
clean:
	rm -f $(O_FILES)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re

