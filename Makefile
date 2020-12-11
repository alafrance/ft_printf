# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 15:02:38 by alafranc          #+#    #+#              #
#    Updated: 2020/12/11 10:50:20 by alafranc         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		= libft_printf.a

NAME_LIBFT 	= libft.a

FILES		= ft_printf.c  ft_print_count.c \
			  $(addprefix  convert/, ft_print_address.c ft_print_char.c \
			  	ft_print_string.c ft_print_decimal.c ft_print_udecimal.c ft_print_hexa.c ft_print_hexa_maj.c)
FILES_BONUS = 

INC_FILES	= ft_printf.h

LIBFT_PATH 	= libft/

SRC_PATH	= ./srcs/

INC_PATH	= ./includes/

SRC			=  $(addprefix ${SRC_PATH}, ${FILES})

SRC_BONUS	=  $(addprefix ${SRC_PATH}, ${FILES} ${FILES_BONUS})

INC			= $(addprefix ${INC_PATH}, ${INC_FILES})

LIBFT		= $(addprefix ${LIBFT_PATH}, ${NAME_LIBFT})

OBJS 		= ${SRC:.c=.o}

OBJS_BONUS	= ${SRC_BONUS:.c=.o}

AR			= ar rcs

CC			= clang

FLAGS		= -Wall -Wextra -Werror

all: 	${NAME}


%.o: %.c	${INC}
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INC_PATH}
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

test:		${NAME}
			${CC} ${FLAGS} ${SRC} ./srcs/main.c ${NAME} -I includes
			clear
			./a.out

.PHONY: all clean fclean re bonus
