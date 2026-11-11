#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "/home/hael-ans/Desktop/project/github/ft_printf/ft_printf.h"
#include <stdlib.h>

typedef struct lst_node
{
	int	content;
	int	count;
	int	operation[11];
	struct lst_node 	*next;
	struct lst_node		*rev;
}	lst_node;

int		ft_comp(char *dest, char *str);
void		push_swap(int argc, char **argv);
lst_node	*last_stack(lst_node *lst);
lst_node	*new_node(int content);
void		r_r_stack(lst_node **lst);
void		r_stack(lst_node **lst);
void		add_back_stack(lst_node **lst, lst_node *new);
void		add_front_stack(lst_node **lst, lst_node *new);
int		size_stack(lst_node *lst);
void		test_stack(void);
void		print_stack(lst_node *lst, lst_node *b);
void		push_stack(lst_node **stack, lst_node **add);
void    	swap_stack(lst_node **lst);

#endif
