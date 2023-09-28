/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:57:51 by jceron-g          #+#    #+#             */
/*   Updated: 2023/09/27 08:51:57 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*string;
	char	target;
	size_t	i;

	string = ((char *)s);
	target = ((char)c);
	i = 0;
	while (i < n)
	{
		if (string[i] != target)
			i++;
		else
			return ((char *)&s[i]);
	}
	return (0);
}

/*
int	main(void)
{
	const char	str[] = "holacomo.estamos";
	const char	ch = 'o';
	char		*function;

	function = ft_memchr(str, ch, ft_strlen(str));
	printf("String after %c is %s\n", ch, function);
}
*/