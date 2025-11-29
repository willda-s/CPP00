# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: williamguerreiro <williamguerreiro@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/28 02:37:02 by willda-s          #+#    #+#              #
#    Updated: 2025/11/11 15:07:08 by williamguer      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

CC	= c++

CFLAGS	= -Wall -Wextra -Werror -Iinclude -std=c++98

FILE = main.cpp \
	   Contact_Getter.cpp \
	   PhoneBook.cpp \
	   Contact_Setter.cpp

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
