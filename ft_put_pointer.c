/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 02:49:14 by psoares-          #+#    #+#             */
/*   Updated: 2022/11/26 15:23:04 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer(unsigned long int nbr, char *str, int ox)
{
	unsigned long int	bl;
	int					counter;

	counter = 0;
	bl = 16;
	if (!nbr)
		return (ft_putstr("(nil)"));
	if (!ox)
		counter += write(1, "0x", 2);
	if (nbr >= bl)
		counter += ft_put_pointer(nbr / bl, str, 1);
	counter += ft_putchar(str[nbr % bl]);
	return (counter);
}
/*
void	ft_pointer(const void *n, char *str)
{
	int					counter;
	unsigned long int 	ncast;

	ncast = (unsigned long)n;
	
	counter = 0;
	if (n == 0)
		counter += ft_putstr("0x0");
	else if (n != 0)
	{
		counter += ft_putstr("0x");
		str = ft_putnbr_base(n, "0123456789abcdef", 16);
		counter += ft_putstr(str);
	}
}*/