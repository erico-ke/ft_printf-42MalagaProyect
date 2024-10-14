/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:45:33 by erico-ke          #+#    #+#             */
/*   Updated: 2024/10/11 20:16:10 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	imputmanager(char imput, va_list args)
{
	if (imput == 'c')
		return (ft_putchar_fd(va_arg(args, char), 1));
	else if (imput == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (imput == 'p')
		return ();
	else if (imput == 'd')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (imput == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (imput == 'u')
		return (ft_putnbrfforuimput_fd(va_arg(args, int), 1));
	else if (imput == 'x')
		return ();
	else if (imput == 'X')
		return ();
	else if (imput == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

int	ft_printf(char const *v_imputs, ...)
{
	int		i;
	int		res;
	va_list	args;

	if (!validcheck(v_imputs))
		return (0);
	va_start(args, v_imputs);
	i = 0;
	res = 0;
	while (v_imputs[i])
	{
		if (v_imputs[i] == '%')
		{
			/* Funcion que checkee cual es la conversion ,la escriba
			y devuelva el largo de lo que escribio para sumarlo a
			res */
			i++;
			res += imputmanager(v_imputs[i], args);
		}
		else
			res += ft_putchar_fd(v_imputs[i], 1);
		i++;
	}
	return (res);
}
