/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:25:30 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/09/29 16:31:09 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	else
		return (NULL);
}

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			i += ft_printchar(str[i]);
		}
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int			print_len;
	long int	ln;

	print_len = 0;
	ln = n;
	if (ln < 0)
	{
		ln *= -1;
		print_len += ft_printchar('-');
	}
	if (ln > 9)
	{
		print_len += ft_printnbr(ln / 10);
		print_len += ft_printchar(ln % 10 + '0');
	}
	else
		print_len += ft_printchar(ln + '0');
	return (print_len);
}
