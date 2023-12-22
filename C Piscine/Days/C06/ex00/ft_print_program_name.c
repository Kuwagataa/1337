/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:08:03 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/28 16:11:48 by hes-safi         ###   ########.fr       */
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

	x = 0;
	while (argc != '\0' && argv[0][x] != '\0')
	{
		ft_putchar(argv[0][x]);
		x++;
	}
	ft_putchar('\n');
	return (0);
}
