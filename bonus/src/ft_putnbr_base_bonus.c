/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:12:03 by nasser            #+#    #+#             */
/*   Updated: 2023/09/29 17:37:59 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_bzero(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = 0;
		i++;
	}
}

int	check_base(char *base)
{
	int	j;
	int	i;

	j = 0;
	while (base[j])
	{
		if (base[j] == '+' || base[j] == '-'
			|| base[j] == ' ' || (base[j] < 14 && base[j] > 8))
			return (0);
		i = 0;
		while (base[i])
		{
			if (i != j)
			{
				if (base[i] == base[j])
					return (0);
			}
			i++;
		}
		j++;
	}
	if (j == 1)
		return (0);
	return (j);
}

int	print_nbr(char *base, long int nbr, int size)
{
	int	print_len;

	print_len = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		print_len += ft_printchar('-');
	}
	if (nbr >= size)
		print_len += print_nbr(base, nbr / size, size);
	print_len += ft_printchar(base[nbr % size]);
	return (print_len);
}

int	ft_putnbr_base(long int nbr, char format)
{
	int			size;
	char		*base;

	if (format == 'X')
		base = HEXA_UP;
	else if (format != 'u')
		base = HEXA_LOW;
	if (format == 'p')
		write(1, "0x", 2);
	else if (format == 'u')
		base = DECIMAL;
	size = check_base(base);
	if (size < 2)
		return (0);
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return (1);
	}
	return (print_nbr(base, nbr, size));
}
