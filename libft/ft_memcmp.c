/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:31:19 by jceron-g          #+#    #+#             */
/*   Updated: 2023/10/03 11:42:45 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}
/*
int main(void)
{
	const void	*s1 = "Testing";
	const void	*s2 = "Testjng";
	size_t		n = 7;

	printf("First string: %s\n", s1);
	printf("Second string: %s\n", s2);
	printf("Lex diff: %d\n", ft_memcmp(s1, s2, n));
}
*/