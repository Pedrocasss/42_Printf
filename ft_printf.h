/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:36:20 by psoares-          #+#    #+#             */
/*   Updated: 2022/11/29 15:27:33 by psoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
//AUXILIARES PARA O PRINTF
int	ft_putchar(char c);
int	ft_strlen(char *str);
int	ft_putnbr_base(int nbr, char *base, int bl);
int	ft_putstr(char *str);
int	ft_put_pointer(unsigned long int nbr, char *str, int ox);
int	ft_printf(const char *format, ...);
int	ft_putnbr_base_uns(unsigned int nbr, char *base, int bl);

#endif