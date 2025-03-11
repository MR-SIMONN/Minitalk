SRCS = client.c server.c /utilis/ft_atoi.c /utilis/ft_printf/ft_printf.c /utilis/ft_printf/ft_putchar.c /utilis/ft_printf/ft_putnbr.c \
	/utilis/ft_printf/ft_putstr.c

SERVER_NAME = server
CLIENT_NAME = client

OBJS = $(SRCS:%.c=%.o)

FLAGS = -Wall -Wextra -Werror

DEPS = minitalk.h

all: $(SERVER_NAME) $(CLIENT_NAME)

%.o: %.c ${DEPS}
	cc ${FLAGS} -c $< -o $@

$(SERVER_NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

$(CLIENT_NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

clean:
	rm -f $(OBJ_SERVER) $(OBJ_CLIENT)

fclean: clean
	rm -f $(SERVER_NAME) $(CLIENT_NAME)

re: fclean all
