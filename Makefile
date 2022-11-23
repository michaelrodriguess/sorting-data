SRCS			= ./srcs/main.c \
				  ./srcs/ft_buildstack.c \
				  ./srcs/ft_operations.c \


NAME			= push_swap

OBJS			= $(SRCS:.c=.o)
CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -g

PRINTF_PATH		= ./ft_printf
LIBFT_PATH		= ./ft_printf/libft/libft.a

$(NAME):	$(SRCS)
		make -C $(PRINTF_PATH)
		$(CC) $(CFLAGS) $(SRCS) $(PRINTF_PATH)/libftprintf.a $(LIBFT_PATH) -o $(NAME)

all: $(NAME)

clean:
		make clean -C $(PRINTF_PATH)
		$(RM) $(OBJS)

fclean:	clean
		make fclean -C $(PRINTF_PATH)
	   	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
