/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:50:52 by jceron-g          #+#    #+#             */
/*   Updated: 2023/12/11 12:32:30 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int number)
{
	int	aux;

	aux = 0;
	if (number == -2147483648)
	{
		aux += ft_putchar('-');
		aux += ft_putchar('2');
		aux += ft_putnbr_base(147483648);
	}
	else if (number > 9)
	{
		aux += ft_putnbr_base(number / 10);
		aux += ft_putnbr_base(number % 10);
	}
	else if (number < 0)
	{
		aux += ft_putchar('-');
		aux += ft_putnbr_base(-number);
	}
	else
		aux += ft_putchar(number + '0');
	return (aux);
}
