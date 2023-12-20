/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:39:49 by hes-safi          #+#    #+#             */
/*   Updated: 2023/12/20 15:10:20 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <fcntl.h>
# include <stdio.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
int		ft_findnl(char *s);
char	*ft_strjoin(char *s1, char *s2);

#endif