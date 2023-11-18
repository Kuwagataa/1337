/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:53:35 by hes-safi          #+#    #+#             */
/*   Updated: 2023/11/15 19:45:07 by hes-safi         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	int		neg;
	int		len;
	int		truelen;
	char	*s;

	neg = 0;
	len = ft_numlen(n);
	truelen = ft_numlen(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
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
	s[truelen] = '\0';
	return (s);
}
