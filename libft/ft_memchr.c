/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:57:51 by jceron-g          #+#    #+#             */
/*   Updated: 2023/10/03 11:41:36 by jceron-g         ###   ########.fr       */
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
	const char	*s = "Helelo";
	int			c = 'e';
	size_t		n = 1;

	printf("String since last occurence in orig ft: %s\n", memchr(s, c, n));
	printf("String since last occurence in my ft: %s", ft_memchr(s, c, n));
}
*/