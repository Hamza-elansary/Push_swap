/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_S_A.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 15:07:20 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/27 17:59:10 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"
/*int insertion(lst_node **stack_a, lst_node **stack_b)
{
	lst_node *min;
	int	size_S;
	int diso;
	int circle;

	size_S = size_stack(*stack_a);
	while (size_S > 2)
	{
		size_S = size_stack(*stack_a);
		min = mini(*stack_a);
		diso = disorder(*stack_a);
		if (min->indext == 0)
			push_stack(stack_b, stack_a,"pb");
		else if (min->indext == 1)
			swap_stack(stack_a,"sa");
		else if (min->indext > size_S / 2)
		{
			ft_printf("size = %d | indext %d  |\n", size_S);
			circle = size_S - min->indext;
			while (circle)
			{
				r_r_stack(stack_a,"rra");
				circle--;
			}
		}
		else if (min->indext < size_S)
		{
			circle = min->indext;
			while(circle)
			{
				r_stack(stack_a,"ra");
				circle--;
			}
		}

	}


return 1;
}*/


int selection(lst_node **stack_a, lst_node **stack_b)
{
	lst_node	*min;
	int			size_S;
	int			circle;

	while (size_stack(*stack_a) > 1)
	{
		size_S = size_stack(*stack_a);
		min = mini(*stack_a);
		if (!min)
			return (0);
		if (min->indext == 0)
			push_stack(stack_b, stack_a, "pb");
		else if (min->indext == 1)
			swap_stack(stack_a, "sa");
		else if (min->indext > size_S / 2)
		{
			circle = size_S - min->indext;
			if (circle == 0)
				r_stack(stack_a, "ra");
			else
				while (circle--)
					r_r_stack(stack_a, "rra");
		}
		else
		{
			circle = min->indext;
			while (circle--)
				r_stack(stack_a, "ra");
		}
	}
	while (*stack_b)
	{
		push_stack(stack_a, stack_b, "pa");
	}
	return (1);
}

