/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:15:50 by jceron-g          #+#    #+#             */
/*   Updated: 2023/12/13 13:21:43 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char c = 'c';
	char *string = "Hola que tal";
	int number = 42;
	int printed_chars;
	unsigned int hex = 1453;

	printed_chars = ft_printf("Mi letra es %c\nMi string es %s\nY mi numero es %d, el puntero es %p, y el hexa es %X\n\n", c, string, number, string, hex);
	ft_printf("%d\n", printed_chars);
	printed_chars = printf("Mi letra es %c\nMi string es %s\nY mi numero es %d, el puntero es %p, y el hexa es %X\n\n", c, string, number, string, hex);
	printf("%d\n", printed_chars);
}
