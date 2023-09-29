/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:12:03 by nasser            #+#    #+#             */
/*   Updated: 2023/09/29 20:16:51 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long int nbr, char format)
{
	int				size;
	char			*base;
	int				print_len;
	long long int	lli;

	lli = nbr;
	print_len = 0;
	base = DECIMAL;
	if (format == 'X')
		base = HEXA_UP;
	else if (format == 'x')
		base = HEXA_LOW;
	size = ft_strlen(base);
	if (lli >= size)
		print_len += ft_putnbr_base(lli / size, format);
	print_len += ft_printchar(base[lli % size]);
	return (print_len);
}
