/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:03:24 by jceron-g          #+#    #+#             */
/*   Updated: 2023/09/25 13:02:50 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sizenum(long int number)
{
	int	i;

	i = 0;
	if (number <= 0)
		i++;
	while (number != 0)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
}
