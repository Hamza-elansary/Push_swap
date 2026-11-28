/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:29:02 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/27 18:16:47 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main/push_swap.h"

void count_ops(lst_node *stack_a, int *ops)
{
	int i;
	
	while (stack_a)
	{
		i = 0;
		while(i < 11)
		{
			ops[i] += stack_a->operation[i];
			i++;
		}
		stack_a = stack_a->next;
	}
	i = 0;
	while (i < 11)
	{
		ops[11] += ops[i];
		i++;
	}
}
int bench(lst_node *stack_a, int flags)
{
	int i;
	char *flag[4] = {"Simple","Medium", "Complex","Adaptive"};
	char *strategy[3] = {"O(n²)","O(n√n)","O(n log n)"};
	int	  ops[12];

	memset(ops, 0,sizeof(ops));
	count_ops(stack_a, ops);
	if (flags == 1)
		i = 0;
	else if (flags == 2)
		i = 1;
	else if (flags == 4)
		i = 2;
	else
		i = 3;
	ft_printf("[bench] disorder  :\t%d\n",14);
	ft_printf("[bench] strategy  :\t%s / %s\n",flag[i], strategy[0]);
	ft_printf("[bench] total_ops :\t%d\n",ops[11]);
	ft_printf("[bench] sa : %d sb : %d ss : %d pa : %d pb : %d\n",ops[0], ops[1], ops[2], ops[3], ops[4]);
	ft_printf("[bensh] ra : %d rb : %d rr : %d rra : %d rrb : %d rrr : %d\n",ops[5], ops[6], ops[7], ops[8], ops[9], ops[10]);

	return 1;
}
