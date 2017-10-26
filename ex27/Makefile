# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jamerlin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 13:41:49 by jamerlin          #+#    #+#              #
#    Updated: 2016/11/04 16:22:49 by jamerlin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = ft_display_file.c

CC = gcc

FLAG = -Wall -Wextra -Werror

OBJ = ft_display_file.o

all: $(NAME)

$(NAME):
	@$(CC) $(FLAG) -c $(SRCS)
	@$(CC) $(FLAG) -o $(NAME) $(OBJ)

clean:
	@/bin/rm -f ft_display_file.o

fclean: clean
	@/bin/rm -f $(NAME)

re:  fclean all
