/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_unsigned.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:26:14 by psoares-          #+#    #+#             */
/*   Updated: 2022/11/26 15:23:08 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_uns(unsigned int nbr, char *base, int bl)
{
	unsigned int	counter;

	counter = 0;
	if (nbr / bl > 0)
		counter = ft_putnbr_base_uns(nbr / bl, base, bl);
	counter += ft_putchar(base[nbr % bl]);
	return (counter);
}
