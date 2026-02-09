# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: willda-s <willda-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/28 02:37:02 by willda-s          #+#    #+#              #
#    Updated: 2026/02/08 16:26:48 by willda-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC	= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

FILE = megaphone.cpp
		
OBJ_DIR = obj/

OBJ = $(addprefix $(OBJ_DIR), $(FILE:.cpp=.o))
DEPD = $(addprefix $(OBJ_DIR), $(FILE:.cpp=.d))

$(OBJ_DIR)%.o : %.cpp
		@mkdir -p $(dir $@)
		$(CC) $(CFLAGS) -c $< -o $@
		
all:	$(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	
clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

-include $(DEPD)

.PHONY : all, clean, fclean, re
