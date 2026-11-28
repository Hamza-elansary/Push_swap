NAME	= push_swap
CC	= cc
NAMEP   = push_swap	
CFLAGS	= -Wall -Wextra -Werror -g3 -fsanitize=address -fno-omit-frame-pointer
PRINTF = ft_printf/libftprintf.a

SRCS	= main/main.c main/push_swap.c main/check_input.c\
	  operation_node/add_back_stack.c operation_node/add_front_stack.c operation_node/update_index.c operation_node/last_stack.c operation_node/new_node_in_stack.c operation_node/print_stack.c operation_node/size_stack.c operation_node/free_stack.c operation_node/check_duplicate.c\
	  operation/push_stack.c operation/r_r_stack.c operation/r_stack.c operation/swap_stack.c\
	  parsing/ft_atoi.c  parsing/ft_comp.c  parsing/ft_split.c parsing/ft_strtrim.c\
	  algorithm/insertion_S_A.c algorithm/operation_algorithm/minimum.c\
	  disorder.c bench.c
	  

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(PRINTF) -o $(NAME)

$(PRINTF):
	$(MAKE) -C ft_printf

%.o: %.c main/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
	$(MAKE) -C ft_printf clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re
