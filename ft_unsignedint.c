/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:23:04 by njaros            #+#    #+#             */
/*   Updated: 2021/12/07 12:32:21 by njaros           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsignedint(unsigned int ap, char type)
{
	if (type == 'u')
		return (ft_putunsignedint_fd(ap, 1));
	else if (type == 'x')
		return (ft_puthexa_fd(ap, "0123456789abcdef", 1));
	else
		return (ft_puthexa_fd(ap, "0123456789ABCDEF", 1));
}
