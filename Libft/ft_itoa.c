/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:53:35 by hes-safi          #+#    #+#             */
/*   Updated: 2023/11/19 19:02:59 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_conv(char *s, int n, int len)
{
	int	neg;

	neg = 0;
	if (n < 0)
	{
		n *= -1;
		neg = 1;
	}
	while (len > 0)
	{
		s[len-- - 1] = (n % 10) + 48;
		n /= 10;
	}
	if (neg)
		s[0] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*s;

	len = ft_numlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s = ft_conv(s, n, len);
	s[len] = '\0';
	return (s);
}
