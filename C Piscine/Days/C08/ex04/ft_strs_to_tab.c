/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:27:42 by hes-safi          #+#    #+#             */
/*   Updated: 2023/09/05 19:33:11 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		x++;
	}
	return (x);
}

char	*ft_strdup(char *src)
{
	int		x;
	char	*copy;

	x = 0;
	while (src[x])
	{
		x++;
	}
	copy = malloc((sizeof(char) * x) + 1);
	if (!copy)
	{
		return (NULL);
	}
	x = 0;
	while (src[x])
	{
		copy[x] = src[x];
		x++;
	}
	copy[x] = '\0';
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*output;
	int			x;

	x = 0;
	output = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!output)
	{
		return (NULL);
	}
	while (x < ac)
	{
		output[x].size = ft_strlen(av[x]);
		output[x].str = av[x];
		output[x].copy = ft_strdup(av[x]);
		x++;
	}
	output[x].str = 0;
	output[x].copy = 0;
	return (output);
}
