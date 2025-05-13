# **************************************************************************** #
#	                                                                          #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/07 16:00:18 by mohasega          #+#    #+#              #
#    Updated: 2025/05/07 16:42:23 by mohasega         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_strdup.c ft_strlen.c ft_strtrim.c \
      ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_strjoin.c ft_strncmp.c ft_substr.c \
      ft_calloc.c ft_isdigit.c ft_memcmp.c ft_split.c ft_strlcat.c ft_strnstr.c ft_tolower.c \
      ft_isalnum.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strrchr.c ft_toupper.c \
	  ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c
BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
            ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
RANLIB = ranlib

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) rc $@ $^
	$(RANLIB) $@

bonus: $(OBJ) $(BONUS_OBJ)
	$(AR) rc $(NAME) $(BONUS_OBJ)
	$(RANLIB) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ) $(BONUS_OBJ)


fclean: clean
	rm -f $(NAME)


re: fclean all
