/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:04:19 by hes-safi          #+#    #+#             */
/*   Updated: 2023/11/19 19:57:22 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)dst;
	i = 0;
	if (!dst && !src && n)
		return (str);
	while (i < n)
	{
		str[i] = ((char *)src)[i];
		i++;
	}
	return ((void *)str);
}
