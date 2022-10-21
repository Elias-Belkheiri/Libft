SRCS			=	*.c
OBJS			=	$(SRCS:.c=.o)
CC				=	cc
CFLAGS			=	-Wall -Wextra -Werror
NAME			=	libft.a
BONUS_SRCS		=	*_bonus.c
BONUS_OBJS		=	*_bonus.o

all				:	${NAME}

bonus			:	${BONUS_OBJS} ${OBJS}
					ar -rc libft.a ${BONUS_OBJS} ${OBJS}

${NAME}			:	${OBJS}
					ar -rc libft.a ${OBJS}

${OBJS}			: 
					${CC} ${CFLAGS} -c ${SRCS}

${BONUS_OBJS}	:
					${CC} ${CFLAGS} -c ${BONUS_SRCS} 

clean			:
					rm -f $(OBJS) 

fclean			: clean
					rm -f ${NAME}

re 				: fclean all
