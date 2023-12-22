/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfirst_word.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:20:58 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/25 10:49:00 by hes-safi         ###   ########.fr       */
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
			while (argv[1][x] == 32 || argv[1][x] == 9 || argv[1][x] == '\n')
			{
				x++;
			}
			while (argv[1][x] != 32 && argv[1][x] != 9 && argv[1][x] != '\n' && argv[1][x] != '\0')
			{
				write(1, &argv[1][x], 1);
				x++;
			}
			break ;
		}
	}
	write(1, "\n", 1);
}
