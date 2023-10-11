/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:21:11 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/10/11 18:02:00 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "./mandatory/includes/ft_printf.h"
// #include "./bonus/includes/ft_printf_bonus.h"

int	main(void)
{
	char	*test;

	test = malloc(1);
	ft_printf("Isso é um símbolo de porcentagem: \"%%\".");
	ft_printf("\nE aqui o numero total de caracteres do print acima: %i.\n", ft_printf("%s:%a %c,", "\nAqui deveria vir a letra \"a\" em maiusculo", 'A'));
	ft_printf("\nponteiro em unsigned long: %u.", test);
	ft_printf("\nponteiro minha: %p.", test);
	printf("\nponteiro printf: %p.\n", test);
	printf("\ntestando %%d aqui sem o ' ': |%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|\n", 1, -2, 3, -4, 5, -6, 7, 8, 9, 0);
	ft_printf("\nBONUS: ( ) com %%d aqui: |% d|% d|% d|% d|% d|% d|% d|% d|% d|% d|", 1, -2, 3, -4, 5, -6, 7, -8, 9, 0);
	ft_printf("\nBONUS: (+) com %%d aqui: |%+d|%+d|%+d|%+d|%+d|%+d|%+d|%+d|%+d|%+d|\n", 1, -2, 3, -4, 5, -6, 7, -8, 9, 0);
	ft_printf("\nBONUS: (#) 34585634 em hexadecimal maiusculo é: %#X.", 34585634);
	ft_printf("\nBONUS: (#) 34585634 em hexadecimal minusculo é: %#x.\n", 34585634);
	printf("\n34585634 em hexadecimal da printf é: %x.\n", 34585634);
	ft_printf("\n%#Xx\n", 34585634);
	ft_printf("\n%-d\n", 34585634);
	// ft_printf("\n NULL %s NULL ", NULL);
	// printf("\n NULL %s NULL ", NULL);
	printf("\ncom '#': %#X", 34585634);
	printf("\nsem '#': %X", 34585634);
	printf("\nhexa %x", -10);
	// printf("\ntestando na printf o '%% s': % s", 1);
	return (1);
}
