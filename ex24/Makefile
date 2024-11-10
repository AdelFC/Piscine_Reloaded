CC = cc
NAME = libft.a
MY_SRCS = $(addprefix ./srcs/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c)
MY_OBJECTS = $(MY_SRCS:.c=.o)
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

%.c: %.o
	$(CC) $(FLAGS) -c $(MY_SRCS)

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all