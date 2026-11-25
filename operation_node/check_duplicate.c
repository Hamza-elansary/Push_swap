#include "../main/push_swap.h"

int	check_duplicate(lst_node *lst)                                                                                      
{                      
	lst_node    *save_node_i;
	lst_node    *save_node_j;
	
	if (!lst)
		return (0);
	save_node_i = lst;
	while (save_node_i)
	{
		save_node_j = save_node_i->next;
		while(save_node_j)
		{
			if (save_node_i->content == save_node_j->content)
				return (0);
			save_node_j = save_node_j->next;
		}
		save_node_i = save_node_i->next;
	}
	return (1);
	 
}

