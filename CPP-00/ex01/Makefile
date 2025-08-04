# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 16:04:51 by lmiguel-          #+#    #+#              #
#    Updated: 2024/11/20 19:10:01 by lmiguel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ContactClass.cpp PhoneBookClass.cpp main.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean: 
		rm -f $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY:		all clean fclean re
