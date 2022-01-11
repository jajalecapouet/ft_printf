/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:10:13 by njaros            #+#    #+#             */
/*   Updated: 2021/12/07 12:38:32 by njaros           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_fd(unsigned int nb, char *base, int fd)
{
	int	c;

	c = 0;
	if (nb / 16 > 0)
	{
		c = c + ft_puthexa_fd(nb / 16, base, fd);
		c = c + ft_puthexa_fd(nb % 16, base, fd);
	}
	if (nb / 16 == 0)
		c = c + ft_putchar_fd(base[nb], fd);
	return (c);
}
