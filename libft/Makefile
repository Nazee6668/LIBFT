# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnajimud <fnajimud@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 11:59:03 by fnajimud          #+#    #+#              #
#    Updated: 2022/04/29 16:55:35 by fnajimud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 		./ft_atoi.c			\
			./ft_bzero.c		\
			./ft_calloc.c		\
			./ft_isalnum.c		\
			./ft_isalpha.c		\
			./ft_isascii.c		\
			./ft_isdigit.c		\
			./ft_isprint.c		\
			./ft_memchr.c		\
			./ft_memcmp.c		\
			./ft_memcpy.c		\
			./ft_memmove.c		\
			./ft_memset.c		\
			./ft_putchar_fd.c	\
			./ft_putendl_fd.c	\
			./ft_putnbr_fd.c	\
			./ft_putstr_fd.c	\
			./ft_split.c		\
			./ft_strchr.c		\
			./ft_strdup.c		\
			./ft_striteri.c		\
			./ft_strjoin.c 		\
			./ft_strlcat.c 		\
			./ft_strlcpy.c 		\
			./ft_strlen.c 		\
			./ft_strncmp.c 		\
			./ft_strnstr.c 		\
			./ft_strrchr.c 		\
			./ft_strtrim.c 		\
			./ft_substr.c 		\
			./ft_toupper.c 		\
			./ft_tolower.c 		\
			./ft_strmapi.c 		\
			./ft_itoa.c			\

OBJS	= $(SRCS:.c=.o)

NAME	= libft.a

INCS	= libft.h

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -I ${INCS} -c $< -o ${<:.c=.o}
	
${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}
	
fclean:	clean
	${RM} ${NAME}

re: 	fclean all

.PHONY: all.c.o clean fclean re
