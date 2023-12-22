/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:05:25 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/31 16:12:37 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	x;
	int	posneg;
	int	toreturn;

	x = 0;
	posneg = 1;
	toreturn = 0;
	while ((str[x] != '\0' && (str[x] >= 9 && str[x] <= 13)) || (str[x] == 32))
	{
		x++;
	}
	while (str[x] == 43 || str[x] == 45)
	{
		if (str[x] == 45)
		{
			posneg *= -1;
		}
		x++;
	}
	while (str[x] != '\0' && str[x] >= 48 && str[x] <= 57)
	{
		toreturn *= 10;
		toreturn += str[x] - 48;
		x++;
	}
	toreturn *= posneg;
	return (toreturn);
}
