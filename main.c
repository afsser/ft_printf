/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:17:16 by nasser            #+#    #+#             */
/*   Updated: 2023/09/29 17:45:08 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	// char	*test;

	// test = malloc(1);
	// ft_printf("Isso é um símbolo de porcentagem: \"%%\".");
	// ft_printf("\nE aqui o numero total de caracteres do print acima: %i.", ft_printf("%s:%a %c,", "\nAqui deveria vir a letra \"a\" em maiusculo", 'A'));
	// ft_printf("\ntestando %%d aqui: %d%d%d%d%d%d%d%d%d%d", 1, 2, 3, 4, 5, 6, 7, 8, 9, 0);
	// ft_printf("\n34585634 em hexadecimal maiusculo é: %X.", 34585634);
	// ft_printf("\n34585634 em hexadecimal minusculo é: %x.", 34585634);
	// ft_printf("\nponteiro em unsigned long: %u.", test);
	// ft_printf("\nponteiro minha: %p.", test);
	// printf("\nponteiro printf: %p.", test);
	// printf("\n34585634 em hexadecimal da printf é: %x.", 34585634);
	printf("\ncom '#': %#X.", 0);
	printf("\nsem '#': %#X.", 1);
	return (1);
}
