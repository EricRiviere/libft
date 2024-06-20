#Variables:
SRC =	./ft_isalpha.c	\
	./ft_isdigit.c	\
	./ft_isalnum.c	\
	./ft_isascii.c	\
	./ft_isprint.c	\
	./ft_toupper.c	\
	./ft_tolower.c	\
	./ft_strlen.c	\
	./ft_strlcpy.c	\
	./ft_strlcat.c	\
	./ft_strchr.c	\
	./ft_strrchr.c	\
	./ft_strncmp.c	\
	./ft_strnstr.c	\
	./ft_atoi.c	\
	./ft_memset.c	\
	./ft_memcpy.c	\
	./ft_memchr.c	\
	./ft_memcmp.c	\
	./ft_strdup.c	\
	./ft_calloc.c	\

OBJS = ${SRC:.c=.o}

NAME = libft.a

TEST_EXEC = test_libft

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

LIB = ranlib

RM = rm -f

#Rules:
all: ${NAME} ${TEST_EXEC}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	${AR} ${NAME} ${OBJS}
	${LIB} ${NAME}

${TEST_EXEC}: ${OBJS} mainTest.o
	${CC} ${CFLAGS} -o ${TEST_EXEC} ${OBJS} mainTest.o ${NAME}

mainTest.o: mainTest.c
	${CC} ${CFLAGS} -c mainTest.c -o mainTest.o

clean:
	${RM} ${OBJS} mainTest.o

fclean: clean
	${RM} ${NAME} ${TEST_EXEC}

re: fclean all

.PHONY: all clean fclean re

