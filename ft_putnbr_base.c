/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:57:33 by psoares-          #+#    #+#             */
/*   Updated: 2022/11/29 15:35:02 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int nbr, char *base, int bl)
{
	int	counter;

	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	counter = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
		counter++;
	}
	if (nbr >= ft_strlen(base))
		counter += ft_putnbr_base(nbr / bl, base, bl);
	counter += ft_putchar(base[nbr % bl]);
	return (counter);
}
