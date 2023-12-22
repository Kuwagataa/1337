/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:48:10 by hes-safi          #+#    #+#             */
/*   Updated: 2023/09/06 19:19:09 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_separator(char c, char *charset)
{
	int	x;

	x = 0;
	while (charset[x])
	{
		if (c == charset[x])
			return (1);
		x++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	x;
	int	count;

	x = 0;
	count = 0;
	while (str[x])
	{
		while (str[x] && check_separator(str[x], charset))
			x++;
		if (str[x])
			count++;
		while (str[x] && !check_separator(str[x], charset))
			x++;
	}
	return (count);
}

int	ft_wordlen(char *str, char *charset)
{
	int	x;

	x = 0;
	while (str[x] && !check_separator(str[x], charset))
	{
		x++;
	}
	return (x);
}

char	*ft_word(char *str, char *charset)
{
	int		x;
	int		wordlen;
	char	*word;

	x = 0;
	wordlen = ft_wordlen(str, charset);
	word = malloc(sizeof(char) * (wordlen + 1));
	while (x < wordlen)
	{
		word[x] = str[x];
		x++;
	}
	word[x] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		x;
	char	**strings;

	x = 0;
	if (!str || !charset)
		return (NULL);
	strings = malloc(sizeof(char *) * (count_strings(str, charset) + 1));
	if (!strings)
		return (0);
	while (*str)
	{
		while (*str && check_separator(*str, charset))
			str++;
		if (*str)
		{
			strings[x] = ft_word(str, charset);
			x++;
		}
		while (*str && !check_separator(*str, charset))
			str++;
	}
	strings[x] = 0;
	return (strings);
}
