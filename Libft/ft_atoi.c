/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:30:19 by hes-safi          #+#    #+#             */
/*   Updated: 2023/11/24 22:34:05 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_limits(size_t num, int sign)
{
	if (sign == 1)
		return (-1);
	else if (sign == -1 && num == 9223372036854775807)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		posneg;
	size_t	toreturn;

	i = 0;
	posneg = 1;
	toreturn = 0;
	while ((str[i] != '\0' && (str[i] >= 9 && str[i] <= 13)) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			posneg = -1;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		toreturn *= 10;
		toreturn += str[i] - 48;
		i++;
	}
	if (toreturn >= 9223372036854775807)
		return (ft_limits(toreturn, posneg));
	return ((int)toreturn * posneg);
}
