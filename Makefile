NAME = push_swap

CFLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address

CC = cc

SRC = 	\
		pushswap.c\
		push.c\
		swap.c\
		rot.c\
		revrot.c\
		listutils.c\
		utils2.c\
		organise.c\
		sort345.c\

OBJS = $(SRC:.c=.o)

LIBFT_PATH = ./include/libft
LIBFT = $(LIBFT_PATH)/libft.a
VPATH = source

RM = rm -f

%.o: %.c
		$(CC) $(CFLAGS) -c $< -I$(LIBFT_PATH) -I include -o $@

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_PATH) -lft -o $(NAME)	

$(LIBFT):
	make -s -C $(LIBFT_PATH)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)
		make fclean -C $(LIBFT_PATH)

re: fclean all

run: all
	./$(NAME) "3 0" "2"

.PHONY: all clean fclean re