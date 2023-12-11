/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:45:44 by jceron-g          #+#    #+#             */
/*   Updated: 2023/12/11 13:39:05 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char const *str, va_list ap)
{
	int	i;

	i = 0;
	if (str[i] == '%')
		i += ft_putchar('%');
	else if (str[i] == 'c')
		i += ft_putchar(va_arg(ap, int));
	else if (str[i] == 's')
		i += ft_putstr(va_arg(ap, char *));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		printed_chars;

	i = 0;
	printed_chars = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			printed_chars += ft_print_format(&format[i], ap);
		}
		else
			printed_chars += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (printed_chars);
}
