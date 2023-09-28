/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:11:21 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/09/27 21:42:50 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*print_var()
{
	
}

int		ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		print_len;

	va_start(args, str);
	i = 0;
	print_len = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr(formats, str[i + 1]))
			print_len = print_len + print_var(args, str[i + 1]);
		else
			print_len = print_len + ft_putchar(str[i]);
		i++;
	}
	return (print_len);
}
