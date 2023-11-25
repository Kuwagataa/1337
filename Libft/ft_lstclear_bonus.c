/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:27:25 by hes-safi          #+#    #+#             */
/*   Updated: 2023/11/25 22:13:31 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextnode;

	if (!lst || !del || !*lst)
		return ;
	while (*lst)
	{
		nextnode = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nextnode;
	}
}
