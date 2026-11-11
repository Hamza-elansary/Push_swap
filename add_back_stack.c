#include "push_swap.h"

void	add_back_stack(lst_node **lst, lst_node *new)
{
	lst_node	*end_list;

	if (!lst || !new)
		return;
	end_list = last_stack(*lst);
	if (!end_list)
	{
		new->next = NULL;
		new->rev = NULL;
		*lst = new;
		
	}
	else
	{
		end_list->next = new;
		new->rev = end_list;
		new->next = NULL;
	}
}
