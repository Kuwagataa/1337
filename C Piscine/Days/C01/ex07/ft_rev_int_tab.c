/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:52:42 by hes-safi          #+#    #+#             */
/*   Updated: 2023/09/03 14:59:18 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	tmp;

	x = 0;
	y = size - 1;
	while (x < (size / 2))
	{
		tmp = tab[x];
		tab[x] = tab[y];
		tab[y] = tmp;
		x++;
		y--;
	}
}
