NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

FILES = ft_printf.c printf_validinputcheck.c printfhexautilities.c printfutilities.c

OBJS = $(FILES:.c=.o)

LIB = ar rcs

all : $(NAME)

$(NAME) : $(OBJS)
	$(LIB) $(NAME) $(OBJS)

$(OBJS) : $(FILES)
	gcc $(FLAGS) -c $(FILES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all