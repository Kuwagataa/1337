/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:21:29 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/30 14:00:31 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	x;

	x = 0;
	while (str1[x] != '\0' && str2[x] != '\0' )
	{
		if (str1[x] == str2[x])
		{
			x++;
		}
		else
			break ;
	}
	return (str1[x] - str2[x]);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_params(int argc, char **argv)
{
	int	x;

	x = 1;
	while (x < argc - 1)
	{
		if (ft_strcmp(argv[x], argv[x + 1]) > 0)
		{
			ft_swap(&argv[x], &argv[x + 1]);
			x = 0;
		}
		x++;
	}
}

int	main(int argc, char **argv)
{
	int	x;

	x = 1;
	ft_sort_params(argc, argv);
	while (x < argc)
	{
		ft_putstr(argv[x]);
		x++;
	}
	return (0);
}
