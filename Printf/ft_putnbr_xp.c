/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:17:35 by hes-safi          #+#    #+#             */
/*   Updated: 2023/12/06 18:54:54 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numlen(unsigned long n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	ft_putnbr_xp(unsigned long nbr, char *base, long int i)
{
	if (i == -1)
		return (-1);
	if (nbr == 0)
	{
		if (ft_putchar('0') < 0)
			return (-1);
		return (1);
	}
	if (nbr > 0 && nbr < 16)
	{
		if (ft_putchar(base[nbr]) < 0)
			return (-1);
	}
	else
	{
		i = ft_putnbr_xp(nbr / 16, base, i);
		i = ft_putnbr_xp(nbr % 16, base, i);
	}
	if (i == -1)
		return (-1);
	return (ft_numlen(nbr));
}
