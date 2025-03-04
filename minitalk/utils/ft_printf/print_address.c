/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 00:54:45 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/29 03:32:34 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_hexa(unsigned long long h, int *i)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (h >= 16)
		print_hexa(h / 16, i);
	*i += ft_putchar(hexa[h % 16]);
}

int	print_address(void *p)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	print_hexa((unsigned long long)p, &i);
	return (i);
}
