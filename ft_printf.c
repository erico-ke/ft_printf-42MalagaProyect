/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:45:33 by erico-ke          #+#    #+#             */
/*   Updated: 2024/10/14 19:37:11 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	inputmanager(char input, va_list args)
{
	if (input == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (input == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (input == 'p')
		return (voidptrwrite(va_arg(args, void *)));
	else if (input == 'd')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (input == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (input == 'u')
		return (ft_putnbrfforuinput_fd(va_arg(args, int), 1));
	else if (input == 'x')
		return (hexaprint(va_arg(args, unsigned int), input));
	else if (input == 'X')
		return (hexaprint(va_arg(args, unsigned int), input));
	else if (input == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

int	ft_printf(char const *v_inputs, ...)
{
	int		i;
	int		res;
	va_list	args;

	if (!validcheck(v_inputs))
		return (0);
	va_start(args, v_inputs);
	i = 0;
	res = 0;
	while (v_inputs[i])
	{
		if (v_inputs[i] == '%')
		{
			i++;
			res += inputmanager(v_inputs[i], args);
		}
		else
			res += ft_putchar_fd(v_inputs[i], 1);
		i++;
	}
	return (res);
}