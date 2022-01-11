/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedint_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:52:42 by njaros            #+#    #+#             */
/*   Updated: 2021/12/07 12:40:57 by njaros           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignedint_fd(unsigned int n, int fd)
{
	int	c;

	c = 0;
	if (n / 10 > 0)
	{
		c = c + ft_putunsignedint_fd((n / 10), fd);
		c = c + ft_putunsignedint_fd((n % 10), fd);
	}
	if (n / 10 == 0)
		c = c + ft_putchar_fd(n + '0', fd);
	return (c);
}
