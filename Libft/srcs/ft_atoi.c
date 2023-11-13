/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:30:19 by hes-safi          #+#    #+#             */
/*   Updated: 2023/11/07 13:37:53 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		posneg;
	int		toreturn;

	i = 0;
	posneg = 1;
	toreturn = 0;
	while ((str[i] != '\0' && (str[i] >= 9 && str[i] <= 13)) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			posneg = -1;
		i++;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		toreturn *= 10;
		toreturn += str[i] - 48;
		i++;
	}
	toreturn *= posneg;
	return (toreturn);
}
