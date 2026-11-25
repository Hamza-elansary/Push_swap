/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_r_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:00:13 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/19 15:02:07 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

void	r_r_stack(lst_node **lst)
{
	lst_node	*tmp;
	int			size;	

	if (!lst)
		return ;
	size = size_stack(*lst);
	if (size < 2)
		return ;
	tmp = *lst;
	while (tmp->next)
	{
		if (tmp->next->next == NULL)
		{
			add_front_stack(lst, tmp->next);
			tmp->next = NULL;
			return ;
		}
		tmp = tmp->next;
	}
}
