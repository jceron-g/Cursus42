/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:19:51 by jceron-g          #+#    #+#             */
/*   Updated: 2023/10/16 12:24:00 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_line(int fd, char *aux_line)
{
	char	*buffer;
	int		read_bytes;

	if (!aux_line)
	{
		aux_line = malloc(1 * sizeof(char));
		aux_line[0] = '\0';
	}
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(aux_line, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		buffer[read_bytes] = '\0';
		aux_line = ft_strjoin(aux_line, buffer);
	}
	free(buffer);
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
	get_line = malloc(i + 1);
	if (!get_line)
		return (NULL);
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
	
}

char	*get_next_line(int fd)
{
	static char	aux_line;
	char		*buffer;

	if (fd < 0 && BUFFER_SIZE < 1)
		return (NULL);
}
  