/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_validinputcheck.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:58:46 by erico-ke          #+#    #+#             */
/*   Updated: 2024/10/15 18:03:07 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_auxcheckfunct(char c)
{
	int		i;
	char	*checker;

	i = 0;
	checker = "cspdiuxX%";
	while (checker[i])
	{
		if (c == checker[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_validcheck(char const *to_check)
{
	int	i;

	i = 0;
	while (to_check[i])
	{
		if (to_check[i] == '%' && ft_auxcheckfunct(to_check[i + 1]) == 0)
			return (0);
		i++;
	}
	return (1);
}
