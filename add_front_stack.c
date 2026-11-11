#include "push_swap.h"

void	add_front_stack(lst_node **lst, lst_node *new)
{
	lst_node	*head;
	if (!lst || !new)
		return;
	head = *lst;
	if(head)
		head->rev = new;
	new->next = head;
	new->rev = NULL;
	*lst = new; 
}
