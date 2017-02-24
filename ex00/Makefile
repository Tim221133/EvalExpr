# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchiorea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/24 10:03:22 by rchiorea          #+#    #+#              #
#    Updated: 2016/07/24 10:03:25 by rchiorea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

OUT = eval_expr

all: $(OUT)

$(OUT):
	gcc -c -Wall -Wextra -Werror *.c 
	gcc -o $(NAME) -Wall -Wextra -Werror *.o
clean:
	/bin/rm -f *.o
fclean:clean
	/bin/rm -f $(OUT)
re: fclean all
