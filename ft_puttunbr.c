/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttunbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:28:11 by jelorza-          #+#    #+#             */
/*   Updated: 2022/01/12 10:29:32 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unbrlen(unsigned int unbr);

int	ft_puttunbr(unsigned int unbr)
{
	int	len;

	if (unbr > 9)
		ft_puttunbr(unbr / 10);
	ft_putchar((unbr % 10) + 48);
	len = ft_unbrlen(unbr);
	return (len);
}

int	ft_unbrlen(unsigned int unbr)
{
	int	len;

	len = 0;
	while (unbr > 9)
	{
		unbr = unbr / 10;
		len++;
	}
	return (len + 1);
}
