/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:16:36 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/30 14:35:30 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	x;
	int	size;
	int	*range;

	x = 0;
	size = max - min;
	range = malloc(sizeof(int) * size);
	if (min >= max)
	{
		return (NULL);
	}
	if (!range)
	{
		return (NULL);
	}
	while (x < size)
	{
		range[x] = min + x;
		x++;
	}
	return (range);
}
