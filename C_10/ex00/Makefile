# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlarra <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/05 17:59:06 by mlarra            #+#    #+#              #
#    Updated: 2021/07/05 18:33:12 by mlarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ft_display_file.c

OBJS		= ${SRC:.c=.o}

NAME		= ft_display_file

GCC			= gcc

FLAGS		= -Wall -Wextra -Werror

RM			= rm -f

.c.o:
	${GCC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${GCC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}
