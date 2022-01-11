SRCS =	ft_int.c \
		ft_printf.c \
		ft_putadr.c \
		ft_putchar_fd.c \
		ft_puthexa_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_putunsignedint_fd.c \
		ft_read.c \
		ft_unsignedint.c
OBJS = ${SRCS:.c=.o}
HEADERS = ft_printf.h
NAME = libftprintf.a
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror

%.o: %.c ${HEADERS}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus :

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean flclean re
