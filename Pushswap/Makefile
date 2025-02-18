NAME = push_swap

CFLAGS = -Wall -Werror -Wextra

CC = cc

SRC = utils.c pushswap.c 

OBJS = $(SRC:.c=.o)

LIBFT = libft/libft.a

%.o: %.c
		$(CC) $(CFLAGS) -c $< -I libft -o $@

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
		$(CC) $(CFLAGS) $(LIBFT) $(OBJS)	

$(LIBFT):
		make -C libft

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)
		make fclean -C libft

re: fclean all

.PHONY: all clean fclean re