/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorza- <jelorza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:07:55 by jelorza-          #+#    #+#             */
/*   Updated: 2022/01/12 10:08:04 by jelorza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stddef.h>

int	ft_printf(const char *format, ...);

int	ft_putchar(char c);

int	ft_putstr(char *str);

int	ft_putnbr(int nbr);

int	ft_puttunbr(unsigned int unbr);

int	ft_puthexa(size_t nbr, char c);

int	ft_nbrlen(int nbr);

#endif
