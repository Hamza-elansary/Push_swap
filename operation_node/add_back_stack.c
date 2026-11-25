/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:32:35 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/19 14:36:27 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

void	add_back_stack(lst_node **lst, lst_node *new)
{
	lst_node	*end_list;

	if (!lst || !new)
		return ;
	end_list = last_stack(*lst);
	if (!end_list)
	{
		new->next = NULL;
		new->rev = NULL;
		*lst = new;
	}
	else
	{
		end_list->next = new;
		new->rev = end_list;
		new->next = NULL;
	}
}
