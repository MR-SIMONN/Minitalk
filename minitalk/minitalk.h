/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:32:01 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/11 16:35:35 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <limits.h>
# include <signal.h>
# include <stdarg.h>
# include <unistd.h>

int     ft_printf(const char *str, ...);
int	    ft_putchar(char c);
void	ft_putnbr(int n, int *i);
int	    ft_putstr(char *s);
long    ft_atoi(const char	*str);

#endif
