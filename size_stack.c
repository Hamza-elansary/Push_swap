#include "push_swap.h"

int	size_stack(lst_node *lst)
{
	int	count_node;

	if (!lst)
		return (0);
	count_node = 0;
	while (lst)
	{
		count_node++;
		lst = lst->next;
	}
	return (count_node);
}
