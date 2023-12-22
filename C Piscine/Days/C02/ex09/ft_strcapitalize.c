/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:01:12 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/21 22:23:30 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 65 && str[x] <= 90)
			str[x] += 32;
			x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	flag;

	x = 0;
	flag = 1;
	ft_strlowcase(str);
	while (str[x] != '\0')
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			if (flag == 1)
					str[x] -= 32;
				flag = 0;
		}
		else if (str[x] >= 48 && str[x] <= 57)
			flag = 0;
		else
			flag = 1;
		x++;
	}
	return (str);
}
