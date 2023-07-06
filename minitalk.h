/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 11:52:56 by mnegro            #+#    #+#             */
/*   Updated: 2023/03/05 11:52:57 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

/* HEADER FILES */
# include "ft_printf/libftprintf.h" 
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>

/* PROTOTYPES */
/* client.c */
void	ft_ascii_to_binary(int ascii, pid_t server_pid);
/* server.c */
void	ft_signal_handler(int signal_value);

#endif
