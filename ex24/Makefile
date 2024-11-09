CC = cc
NAME = libft.a
PATH = ./srcs/
INCLUDE =  ./includes/
MY_SRCS = $(addprefix $(PATH)/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c)
MY_OBJECTS = $(MY_SRCS: .c = .o)
FLAGS = -Wall -Werror -Wextra

$(MY_OBJECTS) : $(MY_SRCS)
		cc -c $(FLAGS) -o $(NAME) $(MY_OBJECTS)
$(NAME) : $(MY_OBJECTS)
