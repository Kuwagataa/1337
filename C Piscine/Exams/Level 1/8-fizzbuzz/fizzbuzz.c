/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:56:38 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/31 14:53:30 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_printnbr (int x)
{
	if (x >= 10)
	{
		ft_printnbr(x / 10);
	}
	x = (x % 10 + '0');
	write(1, &x, 1);
}

int	main(void)
{
	int	x;

	x = 1;
	while (x <= 100)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (x % 3 == 0)
			write(1, "fizz", 4);
		else if (x % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_printnbr(x);
		write(1, "\n", 1);
		x++;
	}
}
