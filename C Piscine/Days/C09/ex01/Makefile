CC = cc
FLAGS = -Wall -Wextra -Werror -I./includes
ARCH = ar rcs
RM = rm -rf
FILES = srcs/ft_putchar.c srcs/ft_putstr.c \
		srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = $(FILES:.c=.o)
LIB = libft.a

.PHONY: all clean fclean re

all: $(LIB)

$(LIB): $(OBJS)
		$(ARCH) $(LIB) $(OBJS)

.c.o:
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIB)

re: fclean all