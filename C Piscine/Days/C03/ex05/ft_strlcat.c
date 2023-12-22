/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:53:04 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/26 18:43:23 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	l++;
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	lens;
	unsigned int	lend;

	x = 0;
	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	lens = ft_strlen(src);
	lend = y;
	if (size == 0 || size <= lend)
	{
		return (lens + size);
	}
	while (src[x] != '\0' && x < size - lend - 1)
	{
		dest[y] = src[x];
		x++;
		y++;
	}
	dest[y] = '\0';
	return (lens + lend);
}
