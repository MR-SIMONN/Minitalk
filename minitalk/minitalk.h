/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:32:01 by moel-hai          #+#    #+#             */
/*   Updated: 2025/02/05 21:32:27 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <limits.h>
# include <signal.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_atoi(const char *str);
int	ft_printf(const char *format, ...);
int	ft_putchar(char c, size_t *counter);
int	ft_putnbr(int num, size_t *counter);
int	ft_puthex(unsigned long num, char format, size_t *counter);
int	ft_putaddr(unsigned long n, size_t *counter);
int	ft_putstr(char *str, size_t *counter);
int	ft_putunsigned(unsigned int n, size_t *counter);
#endif
