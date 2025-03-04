NAME = server
NAME_CLIENT = client
NAME_BONUS = server_bonus
NAME_CLIENT_BONUS = client_bonus

CC = cc
CFLAGS = -Wall -Wextra -Werror

MAN_DIR = ./mandatory
BONUS_DIR = ./bonus
PRINTF_DIR_MAN = $(MAN_DIR)/utils/printf/
PRINTF_DIR_BONUS = $(BONUS_DIR)/utils_bonus/printf/

SRC_MAN = $(PRINTF_DIR_MAN)ft_printf.c $(PRINTF_DIR_MAN)ft_putaddr.c $(PRINTF_DIR_MAN)ft_putchar.c \
          $(PRINTF_DIR_MAN)ft_puthex.c $(PRINTF_DIR_MAN)ft_putnbr.c $(PRINTF_DIR_MAN)ft_putstr.c \
          $(PRINTF_DIR_MAN)ft_putunsigned.c $(PRINTF_DIR_MAN)utils.c
SRC_SERVER = $(SRC_MAN) $(MAN_DIR)/server.c
SRC_CLIENT = $(SRC_MAN) $(MAN_DIR)/client.c

SRC_BONUS = $(PRINTF_DIR_BONUS)ft_printf.c $(PRINTF_DIR_BONUS)ft_putaddr.c $(PRINTF_DIR_BONUS)ft_putchar.c \
            $(PRINTF_DIR_BONUS)ft_puthex.c $(PRINTF_DIR_BONUS)ft_putnbr.c $(PRINTF_DIR_BONUS)ft_putstr.c \
            $(PRINTF_DIR_BONUS)ft_putunsigned.c $(PRINTF_DIR_BONUS)utils.c
SRC_SERVER_BONUS = $(SRC_BONUS) $(BONUS_DIR)/server_bonus.c
SRC_CLIENT_BONUS = $(SRC_BONUS) $(BONUS_DIR)/client_bonus.c

OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ_SERVER_BONUS = $(SRC_SERVER_BONUS:.c=.o)
OBJ_CLIENT_BONUS = $(SRC_CLIENT_BONUS:.c=.o)

all: $(NAME) $(NAME_CLIENT)

$(NAME): $(OBJ_SERVER)
	$(CC) $(CFLAGS) $^ -o $@

$(NAME_CLIENT): $(OBJ_CLIENT)
	$(CC) $(CFLAGS) $^ -o $@

bonus: $(NAME_BONUS) $(NAME_CLIENT_BONUS)
	@echo "Bonus files compiled!"

$(NAME_BONUS): $(OBJ_SERVER_BONUS)
	$(CC) $(CFLAGS) $^ -o $@

$(NAME_CLIENT_BONUS): $(OBJ_CLIENT_BONUS)
	$(CC) $(CFLAGS) $^ -o $@

$(MAN_DIR)/%.o: $(MAN_DIR)/%.c $(PRINTF_DIR_MAN)/%.c minitalk.h
	$(CC) $(CFLAGS) -c $< -o $@

$(BONUS_DIR)/%.o: $(BONUS_DIR)/%.c $(PRINTF_DIR_BONUS)/%.c minitalk_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_SERVER) $(OBJ_CLIENT) $(OBJ_SERVER_BONUS) $(OBJ_CLIENT_BONUS)

fclean: clean
	rm -f $(NAME) $(NAME_CLIENT) $(NAME_BONUS) $(NAME_CLIENT_BONUS)

re: fclean all

.PHONY: all bonus clean fclean re
