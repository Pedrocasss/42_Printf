/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 07:34:37 by psoares-          #+#    #+#             */
/*   Updated: 2022/11/29 15:25:39 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_checker(char conversao, va_list list)
{
	if (conversao == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (conversao == 'd' || conversao == 'i')
		return (ft_putnbr_base(va_arg(list, int), "0123456789", 10));
	else if (conversao == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (conversao == 'X')
		return (ft_putnbr_base_uns(va_arg(list, unsigned int),
				"0123456789ABCDEF", 16));
	else if (conversao == 'x')
		return (ft_putnbr_base_uns(va_arg(list, unsigned int),
				"0123456789abcdef", 16));
	if (conversao == 'p')
	{
		return (ft_put_pointer(va_arg(list, unsigned long int),
				"0123456789abcdef", 0));
	}
	else if (conversao == 'u')
		return (ft_putnbr_base_uns(va_arg(list, unsigned int),
				"0123456789", 10));
	else if (conversao == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;
	int		nb;

	nb = 0;
	i = -1;
	va_start(list, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			nb += ft_print_checker(format[i + 1], list);
			i++;
		}
		else
			nb += ft_putchar(format[i]);
	}
	va_end(list);
	return (nb);
}

/*
int main(void)
{
	int nbr = INT_MAX;
	char cona[] = "Teu pai fugiu";
	ft_printf("%d\n", nbr);
	ft_printf("%s\n", cona);
	ft_printf("%x\n", nbr);
	ft_printf("%p\n", nbr);
	ft_printf("%u\n", nbr);
	printf("%u\n", nbr);
	ft_printf("%%\n");

	ft_printf("%u\n", ft_printf("%d\n",ft_printf("%x\n",ft_printf("%X\n", 50000))));
	printf("%u\n", printf("%d\n",printf("%x\n", 50000)));
}*/