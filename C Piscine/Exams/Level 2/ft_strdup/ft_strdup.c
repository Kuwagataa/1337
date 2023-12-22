/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:43:34 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/30 14:41:21 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		x;
	char	*dest;

	x = 0;
	while (src[x] != '\0')
	{
		x++;
	}
	dest = malloc((sizeof(char) * x) + 1);
	if (!dest)
	{
		return (NULL);
	}
	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
