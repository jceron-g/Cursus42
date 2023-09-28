/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:47:50 by jceron-g          #+#    #+#             */
/*   Updated: 2023/09/27 16:28:40 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static	int	ft_next_del(char const *s, char c, int i)
{
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	ft_lesscode(char **matrix, int count)
{
	matrix[count] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char		**matrix;
	size_t		i;
	size_t		number_words;
	size_t		j;

	number_words = ft_countword(s, c);
	matrix = (char **) malloc((number_words + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	i = ft_lesscode(matrix, number_words);
	j = 0;
	while (j < number_words)
	{
		while (s[i] != '\0')
		{	
			if (s[i] != c && s[i] != '\0')
			{
				matrix[j++] = ft_substr(s, i, (ft_next_del(s, c, i) - i));
				i = ft_next_del(s, c, i);
			}
			else
				i++;
		}
	}
	return (matrix);
}
