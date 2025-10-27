CC = cc -Wall -Wextra -Werror

NAME = libftprintf.a

ARCS = -ar -rcs

SOURCE = ft_printf.c \
	ft_str_func.c \
	ft_nbr_func.c 

HEADER = ft_printf.h

OBJ = $(SOURCE:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(ARCS) $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re