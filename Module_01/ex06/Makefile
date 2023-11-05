# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 20:23:57 by gd-harco          #+#    #+#              #
#    Updated: 2023/11/05 12:26:44 by gd-harco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	harlFilter

SRC_PATH	=	srcs/

SRC			=	main.cpp	\
				Harl.cpp

DIR_INCS	=	incs/

INCLUDES	=	\
	$(addprefix -I , $(DIR_INCS))

DIR_BUILD	=	.build/
OBJS		=	$(patsubst %.cpp, $(DIR_BUILD)%.o, $(SRC))
DEPS		=	$(patsubst %.cpp, $(DIR_BUILD)%.d, $(SRC))
DEPS_FLAGS	=	-MMD -MP
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3
RM			=	rm -rf
CXX			=	c++

.PHONY:		all
all:
			$(MAKE) $(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CPPFLAGS) $(INCLUDES) $(OBJS) $(LIBS) -o $(NAME)

.PHONY:	bonus
bonus:	all

.PHONY:	clean
clean:
		$(RM) $(DIR_BUILD)

.PHONY:	fclean
fclean:	clean
		$(RM) $(NAME)

.PHONY:	re
re:		fclean
		$(MAKE) all

-include $(DEPS)

$(DIR_BUILD)%.o : $(SRC_PATH)%.cpp
		@mkdir -p $(shell dirname $@)
		$(CXX) $(CPPFLAGS) $(DEPS_FLAGS) $(INCLUDES) -c $< -o $@
