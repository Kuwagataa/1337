/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:55:25 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/24 20:26:27 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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

int	main(int argc, char **argv)
{
	int	x;

	x = 0;
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
			while (argv[1][x] != '\0')
			{
				if (argv[1][x] == argv[2][0])
				{
					write(1, &argv[3][0], 1);
				}
				else
					write(1, &argv[1][x], 1);
				x++;
			}
		}
	}
	write(1, "\n", 1);
}
