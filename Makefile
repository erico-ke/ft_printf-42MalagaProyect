NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c printf_validinputcheck.c printfhexautilities.c printfutilities.c

OBJS = $(SRCS:.c=.o)

LIB = ar rcs

all : $(NAME)

$(NAME) : $(OBJS)
	$(LIB) $(NAME) $(OBJS) $?

$(OBJS) : $(SRCS)
	gcc $(FLAGS) -c $(SRCS) $?

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all