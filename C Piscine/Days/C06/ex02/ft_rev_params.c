/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:07:38 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/28 17:21:46 by hes-safi         ###   ########.fr       */
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

	y = argc - 1;
	while (y > 0)
	{
		x = 0;
		while (argc != '\0' && argv[y][x] != '\0')
		{
			ft_putchar(argv[y][x]);
			x++;
		}
		ft_putchar('\n');
		y--;
	}
	return (0);
}
