# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 15:08:20 by lopoka            #+#    #+#              #
#    Updated: 2024/10/08 16:36:08 by lopoka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence
all: $(NAME)

CPP := c++
FLAGS := -Wall -Wextra -Werror -std=c++98

SOURCE := main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ := $(SOURCE:.cpp=.o)

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME) 

%.o : %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
