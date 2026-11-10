/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjardin <mjardin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 20:59:20 by mjardin           #+#    #+#             */
/*   Updated: 2026/11/10 04:06:09 by mjardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

void	ft_putnbr_base(unsigned long adr, char *base, int *ret_len);
void	ft_convert_base(va_list lst_args, char c, int *ret_len);
char	*ft_unsigned_itoa(unsigned long n);
int		ft_printf(const char *s, ...);

#endif
