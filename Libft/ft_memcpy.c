/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:04:19 by hes-safi          #+#    #+#             */
/*   Updated: 2023/11/24 18:40:48 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;

	if (dst == src)
		return (dst);
	str = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		str[i] = ((unsigned char *)src)[i];
		i++;
	}
	return ((void *)str);
}
