/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:38:45 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/27 18:03:26 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int 	push_swap(int argc, char **argv)
{
	lst_node	*stack_a;
	lst_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (check_input(argc, argv, &stack_a, &stack_b) == 0)
	{
		free_stack(&stack_a);
		return (0);
	}
	//insertion(&stack_a,&stack_b);
	//print_stack(stack_a,stack_b);
	free_stack(&stack_a);
	return (1);
}
