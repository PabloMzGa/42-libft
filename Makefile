# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabmart2 <pabmart2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/20 14:34:30 by pabmart2          #+#    #+#              #
#    Updated: 2024/09/25 22:13:13 by pabmart2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = \
    ft_atoi.c \
    ft_isascii.c \
    ft_lstadd_front.c \
    ft_lstmap.c \
    ft_memcpy.c \
    ft_putnbr_fd.c \
    ft_striteri.c \
    ft_strmapi.c \
    ft_substr.c \
    ft_uitob.c \
    ft_bzero.c \
    ft_isdigit.c \
    ft_lstclear.c \
    ft_lstnew.c \
    ft_memmove.c \
    ft_putstr_fd.c \
    ft_strjoin.c \
    ft_strncmp.c \
    ft_tolower.c \
    ft_calloc.c \
    ft_isprint.c \
    ft_lstdelone.c \
    ft_lstsize.c \
    ft_memset.c \
    ft_split.c \
    ft_strlcat.c \
    ft_strnstr.c \
    ft_toupper.c \
    ft_isalnum.c \
    ft_itoa.c \
    ft_lstiter.c \
    ft_memchr.c \
    ft_putchar_fd.c \
    ft_strchr.c \
    ft_strlcpy.c \
    ft_strrchr.c \
    ft_uintptrtob.c \
    ft_isalpha.c \
    ft_lstadd_back.c \
    ft_lstlast.c \
    ft_memcmp.c \
    ft_putendl_fd.c \
    ft_strdup.c \
    ft_strlen.c \
    ft_strtrim.c \
    ft_uitoa.c


OBJ = $(SRC:.c=.o)

all: $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean
	$(MAKE) all

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "\033[32m\n¡$(NAME) compiled! \
	ᕦ(\033[36m⌐■\033[32m_\033[36m■\033[32m)ᕤ\n"

$(OBJ): %.o: %.c
	echo "Compiling $<"
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re bonus
