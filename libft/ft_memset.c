/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:44:38 by jceron-g          #+#    #+#             */
/*   Updated: 2023/10/03 12:18:09 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/**
int main(void)
{
	char str[25] = "Hola Caracola";

	write(1, ft_memset(str, 122, 4 * sizeof(char)), 4);
	write(1, memset(str, 122, 4 * sizeof(char)), 4);
	
}
*/