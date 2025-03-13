

SRCS_AND_SERVER =  server.c utilis/ft_atoi.c utilis/ft_printf/ft_printf.c \
	utilis/ft_printf/ft_putchar.c utilis/ft_printf/ft_putnbr.c \
	utilis/ft_printf/ft_putstr.c

SRCS_AND_CLIENT =  client.c utilis/ft_atoi.c utilis/ft_printf/ft_printf.c \
	utilis/ft_printf/ft_putchar.c utilis/ft_printf/ft_putnbr.c \
	utilis/ft_printf/ft_putstr.c


SERVER_NAME = server
CLIENT_NAME = client

SERVER_OBJS = $(SRCS_AND_SERVER:%.c=%.o)

CLIENT_OBJS = $(SRCS_AND_CLIENT:%.c=%.o)

FLAGS = -Wall -Wextra -Werror

DEPS = minitalk.h

all: $(SERVER_NAME) $(CLIENT_NAME)

%.o: %.c ${DEPS}
	cc ${FLAGS} -c $< -o $@

$(SERVER_NAME): $(SERVER_OBJS)
	$(CC) $(FLAGS) $^ -o $@

$(CLIENT_NAME): $(CLIENT_OBJS)
	$(CC) $(FLAGS) $^ -o $@

clean:
	rm -f $(SERVER_OBJS) $(CLIENT_OBJS)

fclean: clean
	rm -f $(SERVER_NAME) $(CLIENT_NAME)

re: fclean all
