/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:20:52 by jceron-g          #+#    #+#             */
/*   Updated: 2023/10/30 11:30:05 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *aux_line, char *buffer, int read_bytes)
{
	char	*str;
	int		i;
	int		j;

	if (!aux_line)
		aux_line = ft_calloc(1, 1);
	str = malloc((ft_strlen(aux_line) + ft_strlen(buffer) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (aux_line[i])
		str[j++] = aux_line[i++];
	i = 0;
	while (i < read_bytes)
		str[j++] = buffer[i++];
	str[j] = '\0';
	free (aux_line);
	return (str);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	len;
	size_t	i;

	i = 0;
	len = size * count;
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		((unsigned char *)ptr)[i] = '\0';
		i++;
	}
	return (ptr);
}
