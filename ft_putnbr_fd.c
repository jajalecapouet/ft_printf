/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:28:51 by njaros            #+#    #+#             */
/*   Updated: 2021/11/02 15:28:54 by njaros           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_recuputnbr_fd(long n, int fd)
{
	int	c;

	c = 0;
	if (n / 10 > 0)
	{
		c = c + ft_recuputnbr_fd((n / 10), fd);
		c = c + ft_recuputnbr_fd((n % 10), fd);
	}
	if (n / 10 == 0)
		c = c + ft_putchar_fd(n + '0', fd);
	return (c);
}

int	ft_putnbr_fd(int n, int fd)
{
	long	k;
	int		c;

	c = 0;
	k = (long) n;
	if (n < 0)
	{
		c = c + ft_putchar_fd('-', fd);
		k = -k;
	}
	c = c + ft_recuputnbr_fd(k, fd);
	return (c);
}
