/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:12:03 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/09/29 19:52:18 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# define DECIMAL "0123456789"
# define HEXA_LOW "0123456789abcdef"
# define HEXA_UP "0123456789ABCDEF"
# define FORMATS "cspdiuxX%# +"
# define LOW_HASH "0x"
# define UP_HASH "0X"

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(char *str);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_printnbr(int n, int space, int plus);
int		ft_putnbr_base(long int nbr, char format);
int		ft_printptr(unsigned long num);

#endif