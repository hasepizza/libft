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
      ft_isalnum.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strrchr.c ft_toupper.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
RANLIB = ranlib

# オブジェクトファイル名のリスト
OBJS = $(SRC:.c=.o)

# all ターゲット
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rc $@ $^
	$(RANLIB) $@

# .c -> .o の変換ルール
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 中間ファイルの削除
clean:
	rm -f $(OBJS)

# 完全なクリーン
fclean:
	rm -f $(NAME)

# 再ビルド
re: fclean all

