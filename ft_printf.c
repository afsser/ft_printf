/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasser <nasser@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:11:21 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/09/28 15:30:41 by nasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_var(va_list args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_len += ft_printstr(va_arg(args, char *));
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		print_len;

	va_start(args, str);
	i = 0;
	print_len = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr(FORMATS, str[i + 1]))
		{
			print_len = print_len + print_var(args, str[i + 1]);
			i++;
		}
		else
			print_len = print_len + ft_printchar(str[i]);
		i++;
	}
	return (print_len);
}
