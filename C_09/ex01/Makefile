# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlarra <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/04 12:14:54 by mlarra            #+#    #+#              #
#    Updated: 2021/07/04 21:42:53 by mlarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR		=./srcs/

SRCS	= ${DIR}ft_putchar.c ${DIR}ft_putstr.c ${DIR}ft_strcmp.c ${DIR}ft_strlen.c ${DIR}ft_swap.c

OBJS	= ${SRCS:.c=.o}

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

RM		= rm -f

CC		= gcc

.c.o:
	${CC} ${CFLAGS} -c -I includes $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all:	${NAME}

clean:	
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all
