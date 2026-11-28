/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_r_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:00:13 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/27 13:27:32 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

void	r_r_stack(lst_node **lst, char *name)
{
	lst_node	*tmp;
	lst_node	*save_node;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	tmp = *lst;
	while (tmp->next->next)
		tmp = tmp->next;
	save_node = tmp->next;
	if (ft_comp(name, "rra") == 1)
		save_node->operation[8]++;
	else
		save_node->operation[9]++;
	add_front_stack(lst, save_node);
	tmp->next = NULL;
	ft_printf("%s\n", name);
}

