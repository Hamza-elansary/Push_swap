#include "push_swap.h"

lst_node	*last_stack(lst_node *lst)
{
	lst_node	*save_node;
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		save_node = lst;
		lst = lst->next;
		lst->rev = save_node;
	}
	return (lst);
}
