/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:12:03 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/09/27 21:40:02 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define hexa_low "0123456789abcdef"
# define hexa_up "0123456789ABCDEF"
# define formats "cspdiuxX%# +"

# include <unistd.h>
# include <stdarg.h>

char	*ft_strchr(const char *s, int c);
int		*ft_putchar(char c);

#endif