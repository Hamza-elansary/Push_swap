/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login1 <login1@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 12:00:00 by login1            #+#    #+#             */
/*   Updated: 2026/11/07 12:00:00 by login1           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr_fd(int fd, const char *s)
{
	if (write(fd, s, ft_strlen(s)) < 0)
		return ;
}

void	ft_putnbr_fd(int fd, int n)
{
	long	nb;
	char	c;

	nb = n;
	if (nb < 0)
	{
		ft_putstr_fd(fd, "-");
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(fd, (int)(nb / 10));
	c = '0' + nb % 10;
	if (write(fd, &c, 1) < 0)
		return ;
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}