/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 09:50:55 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/22 13:06:25 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

int	check(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	else if (str[i] == '\0')
		return (0);
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (!(str[i] <= '9' && str[i] >= '0'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str, lst_node **stack_a)
{
	long	count;
	int		i;
	int		nega;
	lst_node	*node;

	nega = 0;
	count = 0;
	i = 0;
	if (check(str) == 0)
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nega = 1;
		i++;
	}
	while (str[i])
	{
		if (count * 10 + (str[i] - 48) > 2147483647)
			return 0;
		count = count * 10 + (str[i] - 48);
		i++;
	}
	if (nega == 1)
		count *= -1;
	node = new_node(count);
	add_back_stack(stack_a, node);
	return (1);
}
