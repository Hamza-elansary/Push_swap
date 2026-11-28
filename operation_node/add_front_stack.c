/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:34:39 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/27 12:04:25 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

void	add_front_stack(lst_node **lst, lst_node *new)
{
	lst_node	*head;

	if (!lst || !new)
		return ;
	head = *lst;
	if (head)
		head->rev = new;
	new->next = head;
	new->rev = NULL;
	*lst = new;
	update_index(*lst);	
}
