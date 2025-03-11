/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 04:32:17 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/11 16:36:40 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	skip_it(char *str, int *pi)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	*pi = i;
	return (sign);
}

long	ft_atoi(const char	*str)
{
	int		i;
	int		s;
	long	r;
	long	prev_r;

	i = 0;
	r = 0;
	s = skip_it((char *)str, &i);
	while (((char *)str)[i] >= '0' && ((char *)str)[i] <= '9')
	{
		prev_r = r;
		r = r * 10 + (((char *)str)[i++] - 48);
		if ((r / 10) != prev_r)
			return (0);
	}
	return (r * s);
}
