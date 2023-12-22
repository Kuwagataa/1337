/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:02:08 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/28 15:41:29 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	x;
	long	index;

	x = nb;
	index = 2;
	if (x <= 0)
	{
		return (0);
	}
	if (x == 1)
	{
		return (1);
	}
	if (x >= 2)
	{
		while (index * index <= x)
		{
			if (index * index == x)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
