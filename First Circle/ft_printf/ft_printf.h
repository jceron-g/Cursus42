/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:45:50 by jceron-g          #+#    #+#             */
/*   Updated: 2023/12/12 13:04:08 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *string);
int		ft_printf(const char *format, ...);
int		ft_putdec(int number);
int		ft_puthex(unsigned long i, char c);
int		ft_printuint(unsigned int number);

#endif