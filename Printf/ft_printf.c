/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:21:50 by hes-safi          #+#    #+#             */
/*   Updated: 2023/12/09 20:04:45 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handling(char c, va_list format, int len)
{
	if (c == '%')
		len = ft_putchar('%');
	if (c == 'c')
		len = ft_putchar(va_arg(format, int));
	if (c == 's')
		len = ft_putstr(va_arg(format, char *));
	if (c == 'd' || c == 'i')
		len = ft_putnbr_di(va_arg(format, int), 0);
	if (c == 'u')
		len = ft_putnbr_u(va_arg(format, unsigned int), 0);
	if (c == 'x')
		len = ft_putnbr_xp(va_arg(format, unsigned int), "0123456789abcdef", 0);
	if (c == 'X')
		len = ft_putnbr_xp(va_arg(format, unsigned int), "0123456789ABCDEF", 0);
	if (c == 'p')
	{
		if (ft_putstr("0x") < 0)
			return (-1);
		len = ft_putnbr_xp(va_arg(format, unsigned long),
				"0123456789abcdef", 0);
		if (len >= 0)
			return (len + 2);
	}
	return (len);
}

static int	parsing(const char *format, int i, int len, va_list args)
{
	int	temp;

	temp = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[++i] == 0)
				return (len);
			temp = handling(format[i], args, 0);
			if (temp < 0)
				return (-1);
			len = len + temp;
			i++;
		}
		else
		{
			temp = ft_putchar(format[i]);
			if (temp == -1)
				return (-1);
			len++;
			i++;
		}
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	int		print;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, format);
	print = parsing(format, i, len, args);
	va_end(args);
	return (print);
}
