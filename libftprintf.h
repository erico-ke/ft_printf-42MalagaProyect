/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erico-ke <erico-ke@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:26:26 by erico-ke          #+#    #+#             */
/*   Updated: 2024/10/14 19:37:27 by erico-ke         ###   ########.fr       */
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
int	voidptrwrite(void *input);
int	ft_printf(char const *v_inputs, ...);

#endif