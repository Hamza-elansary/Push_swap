/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:03:45 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/19 15:04:06 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

void	swap_stack(lst_node **lst)
{
	lst_node	*save_node;

	if (!lst || !(*lst) || !(*lst)->next)
		return ;
	save_node = (*lst)->next;
	(*lst)->next = save_node->next;
	save_node->next->rev = *lst;
	save_node->next = *lst;
	(*lst)->rev = save_node;
	*lst = save_node;
	(*lst)->rev = NULL;
}
