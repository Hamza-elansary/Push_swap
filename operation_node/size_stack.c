/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:47:20 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/19 15:07:12 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

int	size_stack(lst_node *lst)
{
	int	count_node;

	if (!lst)
		return (0);
	count_node = 0;
	while (lst)
	{
		count_node++;
		lst = lst->next;
	}
	return (count_node);
}
