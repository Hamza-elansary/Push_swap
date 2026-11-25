/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:38:45 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/24 17:33:32 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int 	push_swap(int argc, char **argv)
{
	lst_node	*stack_a;
	lst_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (check_input(argc, argv,&stack_a) == 0)
	{
		free_stack(&stack_a);
		return (0);
	}
	print_stack(stack_a,stack_b);
	return (1);
}
