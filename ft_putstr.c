/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:25:59 by jelorza-          #+#    #+#             */
/*   Updated: 2022/01/12 10:27:38 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putstr(char *str)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = 0;
	if (!str)
		len += write(1, "(null)", 6);
	else
	{
		while (str[count] != 00)
		{	
			len += ft_putchar(str[count]);
			count++;
		}
	}
	return (len);
}	
