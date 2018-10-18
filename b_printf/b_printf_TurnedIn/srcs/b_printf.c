/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 23:19:10 by jcope             #+#    #+#             */
/*   Updated: 2018/10/11 01:37:51 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

int		convert(unsigned long num, int base)
{
	static char		representation[] = "0123456789abcdef";
	static char		buffer[50];
	char			*ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	if (num == 0)
		return (ft_putchar('0'));
	while (num != 0)
	{
		*--ptr = representation[num % base];
		num /= base;
	}
	return (ft_putstr(ptr));
}

int		ft_putstr(char *str)
{
	int len;

	len = 0;
	if (str == NULL)
		return (ft_putstr("(null)"));
	while (str[len])
		ft_putchar(str[len++]);
	return (len);
}

int		ft_putnum(int num)
{
	int len;

	len = 0;
	if (num == -2147483648)
		return (ft_putstr("-2147483648"));
	if (num < 0)
	{
		len += ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		len += ft_putnum(num / 10);
		len += ft_putnum(num % 10);
	}
	else
		len += ft_putchar(num + '0');
	return (len);
}

int		choose_printf(char c, va_list arg)
{
	if (c == '%')
		return (ft_putchar('%'));
	else if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 'i' || c == 'd')
		return (ft_putnum(va_arg(arg, int)));
	else if (c == 'p')
		return (ft_putstr("0x") + convert(va_arg(arg, unsigned long), 16));
	else if (c == 'o')
		return (convert(va_arg(arg, unsigned long), 8));
	else if (c == 'u')
		return (convert(va_arg(arg, unsigned long), 10));
	else if (c == 'x')
		return (convert(va_arg(arg, unsigned long), 16));
	else
		return (-1);
}

int		b_printf(const char *format, ...)
{
	va_list		list;
	int			chars_printed;
	char		*traverse;

	chars_printed = 0;
	va_start(list, format);
	traverse = (char *)format;
	while (*traverse)
	{
		if (*traverse == '%')
			chars_printed += choose_printf(*++traverse, list);
		else
			chars_printed += ft_putchar(*traverse);
		traverse++;
	}
	va_end(list);
	return (chars_printed);
}
