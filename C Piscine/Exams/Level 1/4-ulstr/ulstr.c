/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:33:22 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/24 20:49:18 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	x;

	x = 0;
	if (argc == 2)
	{
		while (argv[1][x] != '\0')
		{
			if (argv[1][x] >= 65 && argv[1][x] <= 90)
			{
				argv[1][x] += 32;
			}
			else if (argv[1][x] >= 97 && argv[1][x] <= 122)
			{
				argv[1][x] -= 32;
			}
			write(1, &argv[1][x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
}
