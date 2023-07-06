/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:26:52 by mnegro            #+#    #+#             */
/*   Updated: 2023/03/24 10:59:10 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_ascii_to_binary(int ascii, pid_t server_pid)
{
	int			i;

	i = 0;
	while (i < 8)
	{
		if (ascii % 2 == 0)
			kill(server_pid, SIGUSR1);
		if (ascii % 2 == 1)
			kill(server_pid, SIGUSR2);
		ascii /= 2;
		i++;
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	pid_t	server_pid;

	i = 0;
	if (argc < 3)
		exit(1);
	server_pid = ft_atoi(argv[1]);
	while (argv[2][i])
	{
		ft_ascii_to_binary(argv[2][i], server_pid);
		i++;
	}
	return (0);
}
