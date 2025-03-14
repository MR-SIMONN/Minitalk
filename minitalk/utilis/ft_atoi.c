/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 04:32:17 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/14 07:22:46 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

int	skip_it(const char	*s, int *i)
{
	(*i)++;
	while (s[*i] == 32 || (s[*i] >= 9 && s[*i] <= 13))
		(*i)++;
	if (s[*i])
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	result;

	i = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > INT_MAX / 10 || (result
				== INT_MAX / 10 && str[i] - '0' > INT_MAX % 10))
			return (0);
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (str[i] && !(str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		return (0);
	if (str[i] && skip_it(str, &i) == 1)
		return (0);
	return (result);
}
