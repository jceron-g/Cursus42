/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:45:08 by jceron-g          #+#    #+#             */
/*   Updated: 2023/09/22 14:58:35 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (0);
	while (i < len && start < len && s[i])
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
