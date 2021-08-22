# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 15:30:16 by rfelicio          #+#    #+#              #
#    Updated: 2021/08/22 17:45:21 by rfelicio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# =============================================================================
# =============================VARIABLES SECTION===============================
# =============================================================================
NAME			=	libft.a

CC				=	gcc
C_FLAGS			=	-Wall -Wextra -Werror -c -I

LIB				=	ar rcs
LIB_OPTIM		=	ranlib

LD_FLAGS		=

INCLUDES		=	./include

SRC_DIR			=	./src
SRC				=	$(SRC_DIR)/ft_isalpha.c			\
					$(SRC_DIR)/ft_isdigit.c			\
					$(SRC_DIR)/ft_isalnum.c			\
					$(SRC_DIR)/ft_isascii.c			\
					$(SRC_DIR)/ft_isprint.c			\
					$(SRC_DIR)/ft_strlcpy.c			\
					$(SRC_DIR)/ft_strlcat.c			\
					$(SRC_DIR)/ft_strlen.c			\
					$(SRC_DIR)/ft_memset.c			\
					$(SRC_DIR)/ft_bzero.c			\
					$(SRC_DIR)/ft_memcpy.c			\
					$(SRC_DIR)/ft_memmove.c			\
					$(SRC_DIR)/ft_toupper.c			\
					$(SRC_DIR)/ft_tolower.c			\
					$(SRC_DIR)/ft_strchr.c			\
					$(SRC_DIR)/ft_strrchr.c			\
					$(SRC_DIR)/ft_strncmp.c			\
					$(SRC_DIR)/ft_memchr.c			\
					$(SRC_DIR)/ft_memcmp.c			\
					$(SRC_DIR)/ft_strnstr.c			\
					$(SRC_DIR)/ft_atoi.c			\
					$(SRC_DIR)/ft_calloc.c			\
					$(SRC_DIR)/ft_strdup.c			\
					$(SRC_DIR)/ft_substr.c			\
					$(SRC_DIR)/ft_strtrim.c			\
					$(SRC_DIR)/ft_split.c			\
					$(SRC_DIR)/ft_itoa.c			\
					$(SRC_DIR)/ft_strmapi.c			\
					$(SRC_DIR)/ft_striteri.c		\
					$(SRC_DIR)/ft_strjoin.c			\
					$(SRC_DIR)/ft_putchar_fd.c		\
					$(SRC_DIR)/ft_putstr_fd.c		\
					$(SRC_DIR)/ft_putendl_fd.c		\
					$(SRC_DIR)/ft_putnbr_fd.c		\
					$(SRC_DIR)/ft_lstnew.c			\
					$(SRC_DIR)/ft_lstadd_front.c	\
					$(SRC_DIR)/ft_lstsize.c			\
					$(SRC_DIR)/ft_lstlast.c			\
					$(SRC_DIR)/ft_lstadd_back.c		\
					$(SRC_DIR)/ft_lstdelone.c		\
					$(SRC_DIR)/ft_lstclear.c		\
					$(SRC_DIR)/ft_lstiter.c			\
					$(SRC_DIR)/ft_lstmap.c			\

MK_OBJ_DIR		=	mkdir -p obj
OBJ_DIR			=	./obj
OBJ				=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

RM				=	rm -f

# =============================================================================
# ===============================RULES SECTION=================================
# =============================================================================

$(NAME):	$(OBJ)
			$(LIB) $(NAME) $(OBJ)
			$(LIB_OPTIM) $(NAME)
			@echo Compilling libft...
			@echo OK!

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
			$(MK_OBJ_DIR)
			$(CC) $(C_FLAGS) $(INCLUDES) $< -o $@

all:		$(NAME)

clean:
			@$(RM) $(OBJ) $(OBJ_BONUS)
			@echo Cleaning...

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
