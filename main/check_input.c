/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:40:27 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/28 19:11:19 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int check_flags(char **str, int *bench)
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
		else if (ft_comp(str[i], "--bench") == 1)
			*bench = 16;
		i++;
	}
	if (count > 1)
		return 0;
	return res;
}
int	check_input(int argc, char **str, lst_node **stack_a, lst_node **stack_b)
{
	int	res;
	int ops_bench;
	
	ops_bench = 0;
	if (ft_strtrim(argc,  str, stack_a) == 0)
		return 0;
	if (check_duplicate(*stack_a) == 0)
		return 0;
	res = check_flags(str, &ops_bench);
	if (res == 0)
		return (0);
	if (res == 1)
		selection(stack_a,stack_b);
	else if (res == 2)
		ft_printf("%s\n","medium OK");
	else if (res == 4)
		ft_printf ("%s\n","complex OK");
	else if (res == 8)
		ft_printf("adaptive OK\n");
	if (ops_bench == 16)
		bench(*stack_a, res);
	return 1;
}
