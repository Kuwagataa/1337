/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:53:22 by hes-safi          #+#    #+#             */
/*   Updated: 2023/09/07 16:45:52 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 0;
	if (argc == 2)
	{
		while (argv[1][x] != '\0')
		{
			if (argv[1][x] >= 65 && argv[1][x] <= 90)
			{
				y = argv[1][x] - 64;
				while (y > 0)
				{
					write(1, &argv[1][x], 1);
					y--;
				}
			}
			else if (argv[1][x] >= 97 && argv[1][x] <= 122)
			{
				y = argv[1][x] - 96;
				while (y > 0)
				{
					write(1, &argv[1][x], 1);
					y--;
				}
			}
			else
				write(1, &argv[1][x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
}
