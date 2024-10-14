NAME = libftprintf.a
SOURCES = ft_printf.c printf_validinputcheck.c printfhexautilities.c printfutilities.c
OBJECTS = $(SOURCES:.c= .o)

CC = cc
FLAGS = -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
		$(AR) -r $@ $?

%.o: %.c
		$(CC) -c $(FLAGS) $?

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all