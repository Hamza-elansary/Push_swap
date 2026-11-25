/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_stack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:02:25 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/19 15:03:21 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

void	r_stack(lst_node **lst)
{
	lst_node	*end_list;
	int			size;

	if (!lst)
		return ;
	size = size_stack(*lst);
	if (size < 1)
		return ;
	end_list = last_stack(*lst);
	end_list->next = *lst;
	*lst = (*lst)->next;
	(*lst)->rev = NULL;
	end_list->next->next = NULL;
	end_list->next->rev = end_list;
}
