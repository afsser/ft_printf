/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasser <nasser@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:12:03 by nasser            #+#    #+#             */
/*   Updated: 2023/09/28 23:57:55 by nasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

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

int	print_nbr(char *base, char *result, long int nbr, int size)
{
	int	i;
	int	len;

	i = 0;
	while (nbr > 0)
	{
		result[i] = base[nbr % size];
		nbr = nbr / size;
		i++;
	}
	len = i;
	while (i >= 0)
	{
		i--;
		write(1, &result[i], 1);
	}
	return (len);
}

int	ft_putnbr_base(unsigned long int nbr, char format)
{
	int			size;
	char		result[20];
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
	return (print_nbr(base, result, nbr, size));
}
