/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha-revalpha.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:04:56 by hes-safi          #+#    #+#             */
/*   Updated: 2023/08/24 14:12:57 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
		//Or "zYxWvUtSrQpOnMlKjIhGfEdCbA\n" if revalpha.
}
