/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:27:00 by mnegro            #+#    #+#             */
/*   Updated: 2023/03/24 10:59:51 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_signal_handler(int signal_value)
{
	static int	i = 0;
	static int	comp = 1;
	static char	ascii;

	if (signal_value == SIGUSR2)
		ascii |= comp;
	comp <<= 1;
	i++;
	if (i == 8)
	{
		write(1, &ascii, 1);
		i = 0;
		ascii = 0;
		comp = 1;
	}
}

int	main(void)
{
	struct sigaction	sa;
	pid_t				server_pid;

	server_pid = getpid();
	ft_printf("Server ID is %d\n", server_pid);
	while (1)
	{
		sa.sa_handler = &ft_signal_handler;
		sa.sa_flags = 0;
		if (sigaction(SIGUSR1, &sa, NULL) < 0
			|| sigaction(SIGUSR2, &sa, NULL) < 0)
			exit(1);
	}
	return (0);
}
