/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:15:12 by hes-safi          #+#    #+#             */
/*   Updated: 2023/11/24 18:51:29 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*dest;

	i = 0;
	dest = (unsigned char *)b;
	while (i < len)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
