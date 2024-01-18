/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:50:34 by jceron-g          #+#    #+#             */
/*   Updated: 2023/10/03 12:04:41 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src == dst)
		return (dst);
	if (dst < src)
	{
		while (i < len)
		{
			((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
			i++;
		}
	}
	if (dst > src)
	{
		while (len > 0)
		{
			((unsigned char *) dst)[len - 1] = ((unsigned char *) src)[len - 1];
			len --;
		}
	}
	return (dst);
}
/*int	main(void)
{
	char		dst[] = "1234567890";
	//const void	*src = "Copied";
	char		*copy;
	size_t		n = 4;

	printf("Original: %s\n", dst);
	copy = (char *)ft_memmove(dst + 1, dst, n);
	printf("Copy: %s\n", dst);
}*/