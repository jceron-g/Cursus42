/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:19:51 by jceron-g          #+#    #+#             */
/*   Updated: 2023/10/25 14:58:37 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_line(int fd, char *aux_line)
{
	char	*buffer;
	int		read_bytes;

	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buffer)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(buffer, '\n') && read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(aux_line);
			return (NULL);
		}
		aux_line = ft_strjoin(aux_line, buffer, read_bytes);
	}
	free(buffer);
	if (ft_strlen(aux_line) == 0)
		return (free(aux_line), NULL);
	return (aux_line);
}

char	*ft_get_line(char *aux_line)
{
	int		i;
	char	*get_line;

	i = 0;
	if (!aux_line[i])
		return (NULL);
	while (aux_line[i] != '\0' && aux_line[i] != '\n')
		i++;
	i++;
	get_line = malloc(i + 1);
	if (!get_line)
		return (NULL);
	get_line[i] = '\0';
	i = 0;
	while (aux_line[i] != '\0' && aux_line[i] != '\n')
	{
		get_line[i] = aux_line[i];
		i++;
	}
	if (aux_line[i] == '\n')
	{
		get_line[i] = '\n';
		i++;
	}
	return (get_line);
}

char	*ft_clean_line(char *aux_line)
{
	int		i;
	int		j;
	char	*new_aux_line;

	i = 0;
	while (aux_line[i] != '\0' && aux_line[i] != '\n')
		i++;
	if (!aux_line)
	{
		free(aux_line);
		return (NULL);
	}
	new_aux_line = malloc((ft_strlen(aux_line) - i) + 2);
	if (!new_aux_line)
		return (NULL);
	i++;
	j = 0;
	while (aux_line[i] != '\0')
		new_aux_line[j++] = aux_line[i++];
	new_aux_line[j] = '\0';
	free(aux_line);
	return (new_aux_line);
}

char	*get_next_line(int fd)
{
	static char	*aux_line;
	char		*final_line;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
	{
		free(aux_line);
		aux_line = NULL;
		return (NULL);
	}
	aux_line = ft_read_line(fd, aux_line);
	if (!aux_line)
		return (NULL);
	final_line = ft_get_line(aux_line);
	aux_line = ft_clean_line(aux_line);
	return (final_line);
}
