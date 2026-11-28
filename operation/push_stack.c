/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:58:37 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/27 13:18:45 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

void	push_stack(lst_node **stack, lst_node **add, char *name)
{
	lst_node	*save_node;

	if (!stack || !add || !*add)
		return ;
	save_node = *add;
	*add = (*add)->next;
	if (*add)
		(*add)->rev = NULL;
	save_node->next = NULL;
	save_node->rev = NULL;
	add_front_stack(stack, save_node);
	if (ft_comp(name,"pa") == 1)
		save_node->operation[3] += 1;
	else
		save_node->operation[4] += 1;
	
	ft_printf("%s\n",name);
}
