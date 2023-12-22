/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:38:56 by hes-safi          #+#    #+#             */
/*   Updated: 2023/09/01 12:45:15 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc == 2)
	{
		while (argv[1][x] != '\0')
		{
			if (argv[1][x] >= 'a' && argv[1][x] <= 'z')
			{
				y = argv[1][x];
				while (y >= 'a')
				{
					write(1, &argv[1][x], 1);
					y--;
				}
			}
			else if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
			{
				y = argv[1][x];
				while (y >= 'A')
				{
					write(1, &argv[1][x], 1);
					y--;
				}
			}
			else
			{
				write(1, &argv[1][x], 1);
			}
			x++;
		}
	}
	write(1, "\n", 1);
}
