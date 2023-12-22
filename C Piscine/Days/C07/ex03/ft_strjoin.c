/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:51:01 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/30 18:23:20 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

int	ft_full_len(char **strs, int size, int seplen)
{
	int	x;
	int	full_len;

	x = 0;
	full_len = 0;
	while (x < size)
	{
		full_len += ft_strlen(strs[x]);
		full_len += seplen;
		x++;
	}
	full_len -= seplen;
	return (full_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	int		final_len;
	char	*string;

	x = 0;
	final_len = ft_full_len(strs, size, ft_strlen(sep));
	string = (char *)malloc((final_len + 1) * sizeof(char));
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	if (!string)
		return (0);
	while (x < size)
	{
		ft_strcpy(string, strs[x]);
		string += ft_strlen(strs[x]);
		if (x < size - 1)
		{
			ft_strcpy(string, sep);
			string += ft_strlen(sep);
		}
		x++;
	}
	*string = '\0';
	return (string - final_len);
}
