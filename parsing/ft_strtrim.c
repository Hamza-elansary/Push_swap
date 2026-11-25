/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 12:17:50 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/24 12:19:17 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

int	flags(char *str)
{
	if (ft_comp(str, "--simple") == 1
		|| ft_comp(str, "--medium") == 1
		|| ft_comp(str, "--complex") == 1
		|| ft_comp(str, "--adaptive") == 1
		|| ft_comp(str, "--bench") == 1)
		return (1);
	return (0);
}

int	get_start(int argc, char **str)
{
	int	i;

	i = 1;
	while (i < argc && flags(str[i]))
		i++;
	return (i);
}

int	get_end(int start, int argc, char **str)
{
	int	i;

	i = argc - 1;
	while (i >= start && flags(str[i]))
		i--;
	return (i);
}

int	ft_strtrim(int argc, char **string, lst_node **stack_a)
{
	int	start;
	int	end;
	int	i;

	start = get_start(argc, string);
	end = get_end(start, argc, string);
	if (start > end)
		return (0);
	i = start;
	while (i <= end)
	{
		if (!((string[i][0] >= '0' && string[i][0] <= '9')
			|| string[i][0] == '-' || string[i][0] == '+'))
			return (0);
		i++;
	}
	if (ft_split(end - start + 1, &string[start], stack_a) == 0)
		return (0);
	return (1);
}
