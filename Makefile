NAME = push_swap
$(CC) = cc

MY_SOURCES =	push_swap.c \

MY_OBJECTS = $(MY_SOURCES:.c=.o) 

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(MY_OBJECTS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(MY_OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all debug clean re
