/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 03:00:39 by moel-hai          #+#    #+#             */
/*   Updated: 2024/12/05 01:42:29 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		print_it(char c, va_list t);
int		ft_putchar(char c);
void	ft_putnbr(int n, int *i);
void	ft_putnbr_un(unsigned int n, int *i);
int		ft_putstr(char *s);
int		print_hex(unsigned int n, char c);
int		print_address(void *p);

#endif
