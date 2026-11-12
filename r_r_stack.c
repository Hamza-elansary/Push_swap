#include "push_swap.h"

void	r_r_stack(lst_node **lst)
{
	int		size;
	lst_node	*tmp;
	if (!lst)
		return;
	size = size_stack(*lst);
	if (size < 2)
		return;
	tmp = *lst;
	while (tmp->next)
	{
		if (tmp->next->next == NULL)
		{
			add_front_stack(lst, tmp->next);
			tmp->next = NULL;
			return;
		}
		tmp = tmp->next;
	}
}
