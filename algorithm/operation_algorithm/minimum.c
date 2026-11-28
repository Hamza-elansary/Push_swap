/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 15:13:31 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/25 17:13:46 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../main/push_swap.h"

lst_node *mini(lst_node *stack)
{
	lst_node	*min;

	if (!stack)
		return (NULL);
	min =  stack;
	while(stack)
	{
		if (min->content > stack->content)
			min = stack;
		stack = stack->next;
	}
	return (min);
} 
