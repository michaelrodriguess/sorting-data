SRCS			= ./srcs/main.c \
				  ./srcs/operations/ft_swap.c \
				  ./srcs/operations/ft_push.c \
				  ./srcs/operations/ft_rotate.c \
				  ./srcs/checks/ft_check_argv.c \
				  ./srcs/checks/ft_free_matriz.c \
				  ./srcs/checks/ft_print_error.c \
				  ./srcs/buildstack/ft_buildstack.c \
				  ./srcs/buildstack/ft_functions_stack.c \


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
