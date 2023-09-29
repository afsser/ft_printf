/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasser <nasser@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:12:03 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/09/28 23:56:01 by nasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define DECIMAL "0123456789"
# define HEXA_LOW "0123456789abcdef"
# define HEXA_UP "0123456789ABCDEF"
# define FORMATS "cspdiuxX%# +"

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
char	*ft_strchr(const char *s, int c);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_putnbr_base(unsigned long int nbr, char format);

#endif