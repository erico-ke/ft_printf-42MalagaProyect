/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfhexautilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:27:49 by erico-ke          #+#    #+#             */
/*   Updated: 2024/10/15 17:46:07 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_voidptrwrite(unsigned long long input)
{
	int	res;

	ft_putstr_fd("0x", 1);
	res = 2;
	res = hexaprint(input, 'x');
	return (res);
}

int	ft_hexaprint(unsigned long long nbr, char c)
{
	unsigned long long	res;

	res = 0;
	if (nbr >= 16)
		res += hexaprint(nbr / 16, c);
	if (c == 'x')
		ft_putchar_fd("0123456789abcdef"[nbr % 16], 1);
	if (c == 'X')
		ft_putchar_fd("0123456789ABCDEF"[nbr % 16], 1);
	res ++;
	return (res);
}
