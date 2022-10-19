OBJS=*.o
SRCS=*.c
CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
BONUS_SRCS= *_bn.c
BONUS_OBJS= *_bn.o

all : ${NAME}

bonus : ${BONUS_OBJS} ${OBJS}
	ar -rc libft.a ${BONUS_OBJS} ${OBJS}

${NAME} : ${OBJS}
	ar -rc libft.a ${OBJS}

${OBJS} : 
	${CC} ${CFLAGS} -c ${SRCS}

${BONUS_OBJS} :
	${CC} ${CFLAGS} -c ${BONUS_SRCS}

clean :
	rm -f $(OBJS) 

fclean : clean
	rm -f ${NAME}

re : fclean all
