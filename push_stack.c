#include "push_swap.h"

void	push_stack(lst_node **stack, lst_node **add)
{
	lst_node	*save_node;
	if (!stack || !add || !*add)
		return;
	save_node = *add;
	*add = (*add)->next;
	if (*add)
		(*add)->rev = NULL;
	save_node->rev = NULL;

	add_front_stack(stack, save_node);
}
