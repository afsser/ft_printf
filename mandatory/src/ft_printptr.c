/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:52:55 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/09/29 17:06:30 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long num)
{
	char	*base;
	int		print_len;

	base = HEXA_LOW;
	print_len = 0;
	if (num == 0)
		return (ft_printstr("(nil)"));
	if (num >= 16)
		print_len += ft_printptr(num / 16);
	else
		print_len += ft_printstr("0x");
	print_len += ft_printchar(base[num % 16]);
	return (print_len);
}
