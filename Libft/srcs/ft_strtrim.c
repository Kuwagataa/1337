/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:06:53 by hes-safi          #+#    #+#             */
/*   Updated: 2023/11/14 17:30:41 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	trimlen;
	size_t	i;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] && ft_isset(s1[i], set) == 1)
		i++;
	trimlen = ft_strlen(s1);
	while (ft_isset(s1[trimlen - 1], set) == 1)
		trimlen--;
	trimlen -= i;
	trimmed = malloc(trimlen + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, &s1[i], trimlen + 1);
	return (trimmed);
}
