#include "push_swap.h"
#include <string.h>

lst_node *new_node(int content)
{
	lst_node	*node;

	node = (lst_node *)malloc(sizeof(lst_node));
	if (!node)
		return (NULL);
	node->content = content;
	node->count = 0;
	//remove memset
	memset(&node->operation, 0, 44);
	node->next = NULL;
	node->rev = NULL;
	return(node);
}
