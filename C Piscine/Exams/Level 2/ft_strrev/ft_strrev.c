/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:21:48 by hes-safi          #+#    #+#             */
/*   Updated: 2023/09/01 13:37:45 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		x;
	int		y;
	char	tmp;

	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	x--;
	while (x >= y)
	{
		tmp = str[y];
		str[y] = str[x];
		str[x] = tmp;
		x--;
		y++;
	}
	return (str);
}