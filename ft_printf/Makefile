# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnegro <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 11:30:06 by mnegro            #+#    #+#              #
#    Updated: 2022/12/08 11:30:08 by mnegro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### PHONY TARGET ###
.PHONY: all clean fclean re

### SILENT TARGET ###
.SILENT:

### VARIABLES (DEFINITION) ###
NAME = printf

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

ARC = libftprintf.a
AR = ar
ARFLAGS = -c -r -s

#### TARGETS ####
SRCS = ft_chars.c ft_hex.c ft_nbrs.c ft_printf.c ft_voidPtr.c

OBJS = ${SRCS:.c=.o}

### (EXPLICIT) RULES ###
${NAME}: ${OBJS}
	${MAKE} -C libft
	cp libft/libft.a ${ARC}
	${AR} ${ARFLAGS} ${ARC} ${OBJS}
	@echo "Rule 'all' for mandatory ${NAME} executed successfully!"

all:	${NAME}

clean:
	${MAKE} -C libft clean
	${RM} ${OBJS}
	@echo "Rule 'clean' for ${NAME} executed successfully!"

fclean: clean
	${MAKE} -C libft fclean
	${RM} ${ARC}
	@echo "Rule 'fclean' for ${NAME} executed successfully!"

re:	fclean all
	@echo "Rule 're' for ${NAME} executed successfully!"
