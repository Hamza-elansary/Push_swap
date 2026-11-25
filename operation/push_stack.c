/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:58:37 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/19 14:59:59 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

void	push_stack(lst_node **stack, lst_node **add)
{
	lst_node	*save_node;

	if (!stack || !add || !*add)
		return ;
	save_node = *add;
	*add = (*add)->next;
	if (*add)
		(*add)->rev = NULL;
	save_node->rev = NULL;
	add_front_stack(stack, save_node);
}
