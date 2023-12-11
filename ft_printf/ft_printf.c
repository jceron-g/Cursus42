/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:45:44 by jceron-g          #+#    #+#             */
/*   Updated: 2023/12/11 13:10:40 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char const *str, va_list ap, int total)
{
	int	i;

	i = 0;
	if (str[i] == '%')
		total += ft_putchar('%');
	else if (str[i] == 'c')
		total += ft_putchar(va_arg(ap, int));
	else if (str[i] == 's')
		total += ft_putstr(va_arg(ap, char *));
	return (total);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		printed_chars;

	i = 0;
	printed_chars = 0;
	va_start(ap, format);
}
