# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/15 11:43:03 by fdi-cecc          #+#    #+#              #
#    Updated: 2025/07/15 12:25:05 by fdi-cecc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = iter

PINK = \033[95m
RESET = \033[0m
GREEN = \033[32m

all: $(NAME)
	@echo "$(PINK)$(NAME)$(GREEN) compiled ✅$(RESET)"

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CPP) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "$(GREEN)Object files cleaned 🧼$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(GREEN)Executable deleted 🗑️$(RESET)"

re: fclean all

.PHONY: all clean fclean re