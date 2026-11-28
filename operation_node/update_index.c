/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 10:50:27 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/26 20:29:41 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main/push_swap.h"

void    update_index(lst_node *stack)
{
	int	indext;
	lst_node *save_node;
	indext = 0;
	if (!stack)
		return ;
	save_node = stack;
	while (stack)
	{
		stack->indext = indext++;
		stack = stack->next;
		if (save_node == stack)
			return ;
	}
}
