/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:23:55 by moel-hai          #+#    #+#             */
/*   Updated: 2025/02/08 12:58:44 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_signal(int pid, char c)
{
	int	i;

	i = 0;
	while (i++ < 8)
	{
		if (((c >> (8 - i)) & 1) == 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(200);
		usleep(200);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	pid_t	pid;

	i = 0;
	if (argc != 3 || !ft_atoi(argv[1]))
	{
		ft_printf("error : ./client [PID] [ARG]\n");
		return (0);
	}
	pid = ft_atoi(argv[1]);
	while (argv[2][i])
		send_signal(pid, argv[2][i++]);
	send_signal(pid, '\0');
}
