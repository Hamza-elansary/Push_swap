/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:30:38 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/19 14:31:29 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

int	ft_comp(char *dest, char *str)
{
	int	i;

	i = 0;
	while (1)
	{
		if ((unsigned int)dest[i] != (unsigned int)str[i])
			return (0);
		else if (dest[i] == '\0' && str[i] == '\0')
			return (1);
		i++;
	}
}
