/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:26:26 by erico-ke          #+#    #+#             */
/*   Updated: 2024/10/14 22:27:35 by erico-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	validcheck(char const *to_check);
int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putnbrfforuinput_fd(int n, int fd);
int	hexaprint(unsigned long long nbr, char c);
int	voidptrwrite(unsigned long long input);
int	ft_printf(char const *v_inputs, ...);

#endif