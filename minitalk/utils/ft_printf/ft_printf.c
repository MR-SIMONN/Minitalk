/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:40:48 by moel-hai          #+#    #+#             */
/*   Updated: 2025/02/08 13:43:57 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

int	print_it(char c, va_list t)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(t, int));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(t, int), &i);
	else if (c == 's')
		i += ft_putstr(va_arg(t, char *));
	else if (c == 'u')
		ft_putnbr_un(va_arg(t, unsigned int), &i);
	else if (c == 'x' || c == 'X')
		i += print_hex(va_arg(t, unsigned int), c);
	else if (c == 'p')
		i += print_address(va_arg(t, void *));
	else
		i += ft_putchar (c);
	return (i);
}

int	ft_check(char c)
{
	return (c == 'c' || c == 's' || c == 'd' || c == 'i'
		|| c == 'x' || c == 'X' || c == 'p' || c == 'u');
}

int	ft_loop(const char *s, va_list t)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == '%' && !s[i + 1])
			break ;
		if (s[i] == '%' && s[i + 1])
		{
			if (s[++i] == '%')
				len += write(1, "%", 1);
			if (ft_check(s[i]))
				len += print_it(s[i], t);
			else if (s[i] != '%')
				len += write (1, &s[i], 1);
		}
		else
			len += write(1, &s[i], 1);
		i++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	tracker;

	if (write (1, 0, 0) == -1)
		return (-1);
	va_start (tracker, str);
	len = 0;
	len += ft_loop(str, tracker);
	va_end (tracker);
	return (len);
}
