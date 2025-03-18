NAME = push_swap

CFLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address

CC = cc

SRC = listutils.c pushswap.c 

OBJS = $(SRC:.c=.o)

LIBFT = ./libft

RM = rm -f

%.o: %.c
		$(CC) $(CFLAGS) -c $< -I./libft -o $@

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
		make -s -C $(LIBFT)
		$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT) -lft -o $(NAME)	

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)
		make fclean -C libft

re: fclean all

run: all
	./$(NAME) "3 0" "2 -5 6" "1 4"

.PHONY: all clean fclean re