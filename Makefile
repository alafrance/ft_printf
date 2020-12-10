# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alafranc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 15:02:38 by alafranc          #+#    #+#              #
#    Updated: 2020/12/09 18:05:35 by alafranc         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		= libft_printf.a
NAME_LIBFT 	= libft.a
FILES		= main.c ft_printf.c

FILES_BONUS = 

LIBFT_PATH 	= libft/

LIBFT		= $(addprefix ${LIBFT_PATH}, ${NAME_LIBFT})

CC			= clang

OBJS 		= ${FILES:.c=.o}

OBJS_BONUS	= ${FILES_BONUS:.c=.o}

FLAGS		= -Wall -Wextra -Werror

AR			= ar rcs

all: 	${NAME}	

%.o: %.c libft.h
			${CC} ${FLAGS} -c $< -o $@

$(NAME):	${OBJS}
			make -C ${LIBFT_PATH}
			cp ${LIBFT} $(NAME)
			${AR} ${NAME} ${OBJS}

bonus: 		${NAME} ${OBJS_BONUS}
			${AR} ${NAME} ${OBJS_BONUS}
clean:
			make -C ${LIBFT_PATH} clean
			${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re bonus
