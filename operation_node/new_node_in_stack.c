/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node_in_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:40:59 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/19 14:42:33 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

lst_node	*new_node(int content)
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
	return (node);
}
