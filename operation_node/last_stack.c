/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:36:43 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/19 14:40:34 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

lst_node	*last_stack(lst_node *lst)
{
	lst_node	*save_node;
	
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		save_node = lst;
		lst = lst->next;
		lst->rev = save_node;
	}
	return (lst);
}
