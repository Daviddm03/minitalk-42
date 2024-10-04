# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddias-mo <ddias-mo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/23 19:19:45 by ddias-mo          #+#    #+#              #
#    Updated: 2024/09/11 22:13:44 by ddias-mo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#COLORS
DEF_COLOR	=	\033[0;39m
ORANGE		=	\033[0;33m
GRAY		=	\033[0;90m
RED			=	\033[0;91m
GREEN		=	\033[1;92m
YELLOW		=	\033[1;93m
BLUE		=	\033[0;94m
MAGENTA		=	\033[0;95m
CYAN		=	\033[0;96m
WHITE		=	\033[0;97m

#FILES
SERVER	=	server.c
CLIENT	=	client.c
OBJ_S	=	$(SERVER:.c=.o)
OBJ_C	=	$(CLIENT:.c=.o)
NAME_S	=	server
NAME_C	=	client

#FLAGS
CFLAGS	=	-Wall -Wextra -Werror
CC		=	cc 
RM		= rm -rf

#PATHS
PATH_LIBFT = libft
LIBFT = $(PATH_LIBFT)/libft.a
PATH_PRINTF = ft_printf
PRINTF = $(PATH_PRINTF)/libftprintf.a

#RULES
all: $(NAME_S) $(NAME_C)

$(NAME_S): $(OBJ_S)
	@make -C $(PATH_LIBFT)
	@make -C $(PATH_PRINTF)
	@$(CC) $(CFLAGS) $(OBJ_S) $(PRINTF) $(LIBFT) -o $(NAME_S)
	@echo "$(CYAN)----> COMPILATION IS DONE! 🫡 <----"

$(NAME_C): $(OBJ_C)
	@make -C $(PATH_LIBFT)
	@make -C $(PATH_PRINTF)
	@$(CC) $(CFLAGS) $(OBJ_C) $(PRINTF) $(LIBFT) -o $(NAME_C)
	@echo "$(CYAN)----> COMPILATION IS DONE! 🫡 <----"

clean: 
	@make clean -C $(PATH_LIBFT)
	@make clean -C $(PATH_PRINTF)
	@$(RM) $(OBJ_S) $(OBJ_C)
	@echo "$(CYAN)----> OBJS CLEANED 👌 <----"

fclean:	clean
	@make fclean -C $(PATH_LIBFT)
	@make fclean -C $(PATH_PRINTF)
	@$(RM) $(NAME_S) $(NAME_C)
	@echo "$(CYAN)----> $(NAME) ERASED ✅ <----"

re:	fclean all

.PHONY:	all clean fclean re