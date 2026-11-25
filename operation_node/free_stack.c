/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 14:01:06 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/21 14:26:50 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

int	free_stack(lst_node **lst)
{
	lst_node	*last_node;
	lst_node	*prev;

	if (!lst || !(*lst))
		return 0;
	last_node = last_stack((*lst));
	while (last_node)
	{
		prev = last_node->rev;
		free(last_node);
		last_node = prev;
	}
	(*lst) = NULL;
	return 1;
}
