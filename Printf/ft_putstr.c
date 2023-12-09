/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:38:04 by hes-safi          #+#    #+#             */
/*   Updated: 2023/12/04 16:43:44 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		if (ft_putstr("(null)") < 0)
			return (-1);
		return (6);
	}
	while (s[i])
	{
		if (ft_putchar(s[i]) < 0)
			return (-1);
		i++;
	}
	return (i);
}
