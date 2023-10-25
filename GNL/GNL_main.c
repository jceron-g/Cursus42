/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GNL_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:18:54 by jceron-g          #+#    #+#             */
/*   Updated: 2023/10/25 14:19:35 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

void	leaks(void)
{
	system("leaks a.out");
}

int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	atexit(leaks);
	i = 0;
	fd = open("./test.txt", 0);
	while (i < 1)
	{
		line = get_next_line(fd);
		free(line);
		i++;
	}
}
