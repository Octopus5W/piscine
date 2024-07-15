# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 21:44:49 by hdelbecq          #+#    #+#              #
#    Updated: 2024/02/29 21:52:56 by hdelbecq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 12:56:17 by hdelbecq          #+#    #+#              #
#    Updated: 2024/02/29 21:43:59 by hdelbecq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

LIB = libft.a

OBJ = $(SRC:.c=.o)

INC = includes

all: $(LIB)

$(LIB): $(OBJ)
	ar -rc $(LIB) $(OBJ)

$(OBJ): 
	gcc $(FLAGS) -I $(INC) -c $(@:.o=.c) -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY:	clean fclean all re
