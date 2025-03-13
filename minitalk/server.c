/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:23:52 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/12 00:18:21 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_handler(int signum, siginfo_t *info, void *vd)
{
	static int		counter;
	static char		result;
	static pid_t	pid;

	(void)vd;
	if (info->si_pid != pid)
	{
		pid = info->si_pid;
		counter = 0;
		result = 0;
	}
	if (signum == SIGUSR2)
		result |= (0b10000000 >> counter);
	if (++counter == 8)
	{
		counter = 0;
		if (result == '\0')
		{
			write(1, "\n", 1);
			return ;
		}
		write(1, &result, 1);
		result = 0;
	}
}

int	main(void)
{
	struct sigaction	server;
	pid_t				pid;

	pid = getpid();
	ft_printf("Server PID : %d \n", pid);
	server.sa_sigaction = signal_handler;
	server.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &server, 0);
	sigaction(SIGUSR2, &server, 0);
	while (1)
		pause();
	return (0);
}
