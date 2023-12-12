/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:02:33 by jceron-g          #+#    #+#             */
/*   Updated: 2023/12/12 13:10:43 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printuint(unsigned int number)
{
	int		aux;
	long	long_number;

	if (number > 9)
	{
		aux += ft_putdec(number / 10);
		aux += ft_putdec(number % 10);
	}
}
