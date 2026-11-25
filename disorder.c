/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:44:36 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/24 17:55:32 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	disorder(lst_node *stack_a)
{
	int mistakes;
	int total_pairs;
	lst_node *save_node;

	mistakes = 0;
	total_pairs = 0;
	while (stack_a)
	{
		save_node = stack_a->next;
		while(save_node)
		{
			total_pairs++;
			if(stack_a->content > save_node->content)
				mistakes++;
			save_node = save_node->next;
		}
		stack_a = stack_a->next;
	}
	if (tota_pairs > 2)
		return (0);
	return ((mistakes * 100) / total_pairs);
}
