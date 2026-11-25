/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-ans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:37:29 by hael-ans          #+#    #+#             */
/*   Updated: 2026/11/24 16:51:13 by hael-ans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../main/push_swap.h"

int	ft_len(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && str[i] != ' ')
		i++;
	return (i);
}

char	*ft_join(char *str)
{
	char	*dest;
	int		size;
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	size = ft_len(str);
	dest = malloc((sizeof(char)) * size + 1);
	if (!dest)
		return (NULL);
	while (str[i] && i < size)
	{
		dest[i] = str[i];
		i++;
	}
	dest[size] = '\0';
	return (dest);
}
int	process_arg(char *str, lst_node **stack_a)
{
	char	*print;
	int		b;

	print = ft_join(str);
	if (!print)
		return (0);
	b = ft_len(print);
	if (!ft_atoi(print, stack_a))
	{
		free(print);
		return (0);
	}
	free(print);
	return (b);
}
int	ft_split(int argc ,char **str, lst_node **stack_a)
{
	int		(i), (j), (b);
	i = 0;
	if (!str ||!(*str))
		return (0);
	while (str[i] && i < argc)
	{ 
		j = 0;
		while (str[i][j])
		{
			while (str[i][j] == ' ')
				j++;
			if(str[i][j] == '\0')
				break ;
			b = process_arg(&str[i][j], stack_a);
				if (!b)
				return (0);
			j += b;
		}
		i++;
	}
	return (1);
}
