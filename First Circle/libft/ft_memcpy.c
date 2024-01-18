/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 08:53:25 by jceron-g          #+#    #+#             */
/*   Updated: 2023/09/19 08:53:25 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destiny;
	char	*source;
	size_t	i;

	i = 0;
	destiny = ((char *) dst);
	source = ((char *) src);
	if (src == 0 && dst == 0)
		return (dst);
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (dst);
}
/*int main(void)
{
	char dst[] = "Original";
	const void	*src = "Copied";
	size_t	n = 6;

	printf("%s\n", (char *)ft_memcpy(dst+2, dst, n));
	 
}*/