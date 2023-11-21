/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:28:18 by hes-safi          #+#    #+#             */
/*   Updated: 2023/11/21 16:38:11 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lens;
	size_t	lend;
	size_t	i;
	size_t	j;

	lens = ft_strlen(src);
	lend = ft_strlen(dst);
	i = 0;
	j = lend;
	if (dstsize <= lend)
	{
		return (lens + dstsize);
	}
	while (src[i] && i < dstsize - lend - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (lens + lend);
}
