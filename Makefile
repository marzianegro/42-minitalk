# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnegro <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 21:28:41 by mnegro            #+#    #+#              #
#    Updated: 2023/03/04 21:28:42 by mnegro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### PHONY TARGET ###
.PHONY: all clean fclean re

### SILENT TARGET ###
.SILENT:

### VARIABLES (DEFINITION) ###
NAME = minitalk
ARC = libftminitalk.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

#### TARGETS ####
CLIENTSRC = client.c
SERVERSRC = server.c

CLIENTOBJ = ${CLIENTSRC:.c=.o}
SERVEROBJ = ${SERVERSRC:.c=.o}

### (EXPLICIT) RULES ###
${NAME}: ${CLIENTOBJ} ${SERVEROBJ}
	${MAKE} -C ft_printf
	cp ft_printf/libftprintf.a ${ARC}
	${CC} ${CFLAGS} -o client ${CLIENTOBJ} ${ARC}
	${CC} ${CFLAGS} -o server ${SERVEROBJ} ${ARC}
	@echo "Rule 'all' for mandatory ${NAME} executed successfully!"

all:	${NAME}

clean:
	${MAKE} -C ft_printf clean
	${RM} ${CLIENTOBJ} ${SERVEROBJ}
	@echo "Rule 'clean' for ${NAME} executed successfully!"

fclean: clean
	${MAKE} -C ft_printf fclean
	${RM} ${ARC} client server
	@echo "Rule 'fclean' for ${NAME} executed successfully!"

re:	fclean all
	@echo "Rule 're' for ${NAME} executed successfully!"
