# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 21:41:25 by nosilves          #+#    #+#              #
#    Updated: 2023/05/26 15:43:41 by nosilves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-------------------------------------COLORS-----------------------------------#
BOLD_PURPLE	=	\033[1;35m
BOLD_CYAN	=	\033[1;36m
BOLD_YELLOW	=	\033[1;33m
DEF_COLOR	=	\033[0;39m
GRAY		=	\033[0;90m
RED			=	\033[0;91m
GREEN		=	\033[0;92m
YELLOW		=	\033[0;93m
BLUE		=	\033[0;94m
MAGENTA		=	\033[0;95m
CYAN		=	\033[0;96m
WHITE		=	\033[0;97m

#------------------------------------- -----------------------------------#

NAME = libft.a
INCLUDE = libft.h
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	  ft_strlcat.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_atoi.c \

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ) $(INCLUDE)
	ar rcs $(NAME) $(OBJ)

%.o : %.c $(INCLUDE)
	@printf "${YELLOW}\rCompiling (╮°-°)╮┳━┳ ${GREEN} : $<\n" 
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@echo "Cleaning... (ノಠ益ಠ)ノ彡┻━┻"
	$(RM) $(OBJ)

fclean: clean
	@echo "Cleaning all!!!"
	$(RM) $(NAME)

re: fclean all

colors: ## show all the colors
	@echo "${GRAY}BLACK${RESET}"
	@echo "${RED}RED${RESET}"
	@echo "${GREEN}GREEN${RESET}"
	@echo "${YELLOW}YELLOW${RESET}"
	@echo "${BLUE}LIGHTPURPLE${RESET}"
	@echo "${MAGENTA}PURPLE${RESET}"
	@echo "${CYAN}BLUE${RESET}"
	@echo "${WHITE}WHITE${RESET}"

.PHONY: all clean fclean re colors
