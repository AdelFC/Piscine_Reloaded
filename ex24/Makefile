CC = clang
NAME = libft.a
PATH = ./srcs
INCLUDE =  ./includes/libft.h
MY_SRCS = $(addprefix $(PATH)/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c)
MY_OBJECTS = $(MY_SRCS: .c = .o)
FLAGS = -Wall -Werror -Wextra

all: $(NAME)
$(MY_OBJECTS) : $(MY_SRCS)
		cc -c $(NAME) -o $(MY_OBJECTS) $(FLAGS)

$(NAME) : $(MY_OBJECTS)

clean:

fclean:

re: