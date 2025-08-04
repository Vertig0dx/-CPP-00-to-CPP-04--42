# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/05 18:39:02 by lmiguel-          #+#    #+#              #
#    Updated: 2024/12/18 16:17:57 by lmiguel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism0

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp 

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