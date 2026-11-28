/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_stack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:02:25 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/27 13:30:31 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

void	r_stack(lst_node **lst, char *name)
{
	lst_node	*end_list;
	lst_node	*save_list;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	end_list = last_stack(*lst);
	save_list = *lst;
	*lst = (*lst)->next;
	(*lst)->rev = NULL;
	end_list->next = save_list;
	save_list->rev = end_list;
	save_list->next = NULL;
	if (ft_comp(name,"ra") == 1)
		save_list->operation[5] += 1;
	else
		save_list->operation[6] += 1;
	update_index(*lst);
	ft_printf("%s\n", name);
}
