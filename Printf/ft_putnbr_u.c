/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:13:50 by hes-safi          #+#    #+#             */
/*   Updated: 2023/12/06 18:45:40 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr_u(unsigned int nbr, long int i)
{
	if (i == -1)
		return (-1);
	if (nbr == 0)
	{
		if (ft_putchar('0') < 0)
			return (-1);
		return (1);
	}
	if (nbr < 10)
	{
		if (ft_putchar(nbr + 48) < 0)
			return (-1);
	}
	else
	{
		i = ft_putnbr_u(nbr / 10, i);
		i = ft_putnbr_u(nbr % 10, i);
	}
	if (i == -1)
		return (-1);
	return (ft_numlen(nbr));
}
