# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcope <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/22 16:15:47 by jcope             #+#    #+#              #
#    Updated: 2018/09/22 16:15:49 by jcope            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HDR = includes/
SRC = srcs/*.c 
OBJ = *.o
COMPILE = gcc -Wall -Wextra -Werror -c

all: $(NAME)
	
$(NAME):
	 $(COMPILE) $(SRC) -I $(HDR)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
