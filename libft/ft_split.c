/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g < jceron-g@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:47:50 by jceron-g          #+#    #+#             */
/*   Updated: 2023/09/26 18:37:26 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_countletters(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i++] != c && (s[i] == c || s[i] == '\0'))
		count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**string;
	size_t		i;
	size_t		len;

	string = malloc(sizeof(char *) * (ft_countletters(s, c) + 1));
	if (!string)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			len = 0;
			while (s[i] && (s[i] != c))
			{
				len++;
				i++;
			}
			string[i++] = ft_substr(s - len, 0, len);
		}
		else
			i++;
	}
	string[i] = '\0';
	return (string);	
}
