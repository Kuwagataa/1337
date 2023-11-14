/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:39:35 by hes-safi          #+#    #+#             */
/*   Updated: 2023/11/14 21:29:38 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_word(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	*word;

	i = 0;
	len = ft_wordlen(s, c);
	word = malloc(len + 1);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**words;

	i = 0;
	if (!s || !c)
		return (NULL);
	words = malloc((sizeof(char *)) * (ft_wordcount(s, c)) + 1);
	if (!words)
		return (NULL);
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s != '\0')
		{
			words[i++] = ft_word(s, c);
			free(ft_word(s, c));
		}
		while (*s && *s != c)
			s++;
	}
	words[i] = 0;
	return (words);
}
