# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 17:50:33 by hes-safi          #+#    #+#              #
#    Updated: 2023/12/06 18:01:31 by hes-safi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a
SRCS			=	ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr_di.c \
					ft_putnbr_u.c ft_putnbr_xp.c
OBJS			=	${SRCS:.c=.o}
CFLAGS			=	-Wall -Wextra -Werror
ARCH			=	ar rc
RM				=	rm -f
CC				=	cc

all:				${NAME}

${NAME}:			${OBJS}

${OBJS}:			${SRCS}
						${CC} ${CFLAGS} -c ${SRCS}
						${ARCH} ${NAME} ${OBJS}

clean:
						${RM} ${OBJS}

fclean:				clean
						${RM} ${NAME}

re:					fclean all

.PHONY:				all clean fclean re