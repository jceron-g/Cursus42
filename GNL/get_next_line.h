/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:19:25 by jceron-g          #+#    #+#             */
/*   Updated: 2023/10/26 10:11:11 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *aux_line);
char	*ft_get_line(char *aux_line);
char	*ft_clean_line(char *aux_line);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *aux_line, char *buffer, int read_bytes);
int		ft_strlen(char *str);
void	*ft_calloc(size_t count, size_t size);

#endif