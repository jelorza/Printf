
NAME = libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_puttunbr.c ft_puthexa.c ft_nbrlen.c

OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBC = ar rcs

RM = rm -f

all: $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(LIBC) $@ $^

clean:
		$(RM) $(OBJS)
	
fclean:
		$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
