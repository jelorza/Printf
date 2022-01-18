/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:05:44 by jelorza-          #+#    #+#             */
/*   Updated: 2022/01/12 10:07:35 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int	after_ph_type(va_list ap, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (c == 'd' || c == 'i')
		return ((ft_putnbr(va_arg(ap, int))));
	else if (c == 'u')
		return (ft_puttunbr(va_arg(ap, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthexa(va_arg(ap, unsigned int), c));
	else if (c == 'p')
		return (ft_putstr("0x") + ft_puthexa(va_arg(ap, size_t), c));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			len += after_ph_type(ap, *++format);
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (len);
}	
