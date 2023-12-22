/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:16:18 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/28 16:28:06 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	y = 1;
	while (y < argc)
	{
		x = 0;
		while (argv[y][x] != '\0')
		{
			ft_putchar(argv[y][x]);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
	return (0);
}
