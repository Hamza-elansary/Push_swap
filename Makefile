NAME	= push_swap
CC	= cc
NAMEP   = push_swap	
CFLAGS	= -Wall -Wextra -Werror
PRINTF = ft_printf/libftprintf.a

SRCS	= main.c ft_put.c bench.c add_back_stack.c add_front_stack.c \
	  ft_comp.c last_stack.c new_node_in_stack.c print_stack.c \
	  push_stack.c push_swap.c r_r_stack.c r_stack.c size_stack.c\
	  swap_stack.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(PRINTF) -o $(NAME)

$(PRINTF):
	$(MAKE) -c ft_prinntf

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
	$(MAKE) -c ft_printf clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -c ft_printf fclean

re: fclean all

.PHONY: all clean fclean re
