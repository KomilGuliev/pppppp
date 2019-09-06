# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kolya <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 17:13:05 by kolya             #+#    #+#              #
#    Updated: 2019/09/05 17:19:53 by kolya            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = srcs/*.c

all:
	gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean:	clean
		rm -rf $(NAME)
re: fclean all
