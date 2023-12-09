/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:51:30 by hes-safi          #+#    #+#             */
/*   Updated: 2023/12/06 18:41:29 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numlen(long int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr_di(long int nbr, long int i)
{
	if (i == -1)
		return (-1);
	if (nbr < 0)
	{
		if (ft_putchar('-') < 0)
			return (-1);
		i = ft_putnbr_di(-nbr, i);
	}
	if (nbr > 9)
	{
		i = ft_putnbr_di(nbr / 10, i);
		i = ft_putnbr_di(nbr % 10, i);
	}
	else if (nbr >= 0 && nbr <= 9)
	{
		if (ft_putchar(nbr + 48) < 0)
			return (-1);
	}
	if (i == -1)
		return (-1);
	return (ft_numlen(nbr));
}
