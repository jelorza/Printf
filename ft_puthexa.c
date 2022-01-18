/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:08:55 by jelorza-          #+#    #+#             */
/*   Updated: 2022/01/14 10:05:42 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(size_t nbr, char c)
{
	char	*hexa_min;
	char	*hexa_max;
	int		len;

	hexa_min = "0123456789abcdef";
	hexa_max = "0123456789ABCDEF";
	len = 0;
	if (c == 'x' || c == 'p')
	{
		if (nbr > 15)
			len += ft_puthexa(nbr / 16, c);
		len += ft_putchar(hexa_min[nbr % 16]);
	}
	if (c == 'X')
	{
		if (nbr > 15)
			len += ft_puthexa(nbr / 16, c);
		len += ft_putchar(hexa_max[nbr % 16]);
	}
	return (len);
}
