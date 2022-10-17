CC = gcc
LIBC = ar rc
INC = -L.
LFLAG = -lft
FLAGS = -Wall -Wextra -Werror
SRCS = ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_calloc.c ft_memchr.c ft_strnstr.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_bzero.c ft_strlen.c ft_memset.c ft_isprint.c ft_strlcpy.c ft_memmove.c ft_isascii.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_atoi.c ft_memcmp.c

OBJS = ${SRCS:.c=.o}
NAME = libft.a

all:${NAME}

${NAME}:${OBJS}
	@${LIBC} ${NAME} ${OBJS}

%o:%c
	@${CC} ${FLAGS} -c -o $@ $^

run:
	@${CC} ${FLAGS} main.c ${INC} ${LFLAG}

clean:
	@echo delet the file.o
	@rm -f ${OBJS}
fclean:clean
	@rm -f ${NAME}
re:fclean all

.PHONY:run all fclean clean 





