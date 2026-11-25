/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:40:27 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/24 16:33:22 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int check_flags(char **str)
{
	int	i;
	int res;
	int count;

	count = 0;
	i= 1;
	res = 8;
	while (str[i])
	{
		if (ft_comp(str[i], "--simple") == 1)
			res = 1, count++;
		else if (ft_comp(str[i], "--medium") == 1)
			res = 2, count++;
		else if (ft_comp(str[i] , "--complex") ==  1)
			res = 4, count++;
		else if (ft_comp(str[i], "--adaptive") == 1)
			res = 8, count++;
		i++;
	}
	if (count > 1)
		return 0;
	return res;
}
int check_bench(char **str)
{
	int i;
	int res;

	res = 0;
	i = 1;
	while (str[i])
	{
		if (ft_comp(str[i], "--bensh") == 1)
			res	+= 16;
		i++;
	}
	if (res == 0 || res > 16)
		return  0;
	return res;
}
int	check_input(int argc, char **str, lst_node **stack_a)
{
	int	res;
	
	if (ft_strtrim(argc,  str, stack_a) == 0)
		return 0;
	if (check_duplicate(*stack_a) == 0)
		return 0;
	res = check_flags(str);
	if (res == 0)
		return (0);
	if (res == 1)
		ft_printf("simple OK\n");
	else if (res == 2)
		ft_printf("medium OK\n");
	else if (res == 4)
		ft_printf ("complex OK\n");
	else if (res == 8)
		ft_printf ("adaptive OK\n");
	if (check_bench(str) == 16)
		ft_printf("bench OK");


	return 1;
}
