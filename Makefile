# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esouza <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 10:27:07 by esouza            #+#    #+#              #
#    Updated: 2019/02/25 12:33:42 by esouza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = srcs

OBJ_DIR = objs

INLCUDE_DIR= includes

SRCS = ft_putchar.c \
	   ft_putstr.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_strlen.c \
	   ft_tolower.c \
	   ft_swap.c \
	   ft_toupper.c\
	   ft_isprint.c \
	   ft_isspace.c \
	   ft_isascii.c \
	   ft_isalnum.c \
	   ft_isdigit.c \
	   ft_isalpha.c \
	   ft_atoi.c \
	   ft_strstr.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strlcat.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strdup.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strnstr.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strmapi.c \
	   ft_strmap.c \
	   ft_strequ.c \
	   ft_strnequ.c \
	   ft_strsub.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_putendl.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr.c \
	   ft_putnbr_fd.c \
	   ft_itoa.c \
	   ft_strsplit.c \
	   ft_wordcount.c \
	   ft_wordlen.c \
	   get_next_line.c \
	   ft_chose_itoa.c ft_flags.c ft_handle_percent.c ft_hash.c ft_hljz.c \
	   ft_int.c ft_intmax_t_itoa.c ft_itoa_base.c ft_left_adjusted.c ft_no_frmt.c \
	   ft_oct.c ft_parsing.c ft_printf.c ft_right_adjusted.c ft_select_function.c \
	   ft_set_unicode_bits.c ft_signed_itoa.c ft_spaghetti1.c ft_spaghetti2.c \
	   ft_unsigned_itoa_base.c ft_wchar.c ft_char_itoa.c ft_atoi_bi.c ft_string.c \
	   ft_intlen.c

CC = gcc  -Iinlcludes/libft.h

AR = ar rcs

OBJS = $(SRCS:.c=.o)

#OBJS = $(addprefix $(OBJ_DIR)/,$(notdir $(SRC)))

CFLAGS = -Wall -Werror -Wextra -Iincludes

$(NAME): $(OBJS:%.o=$(OBJ_DIR)/%.o) Makefile
	@$(AR) $@ $(OBJS:%.o=$(OBJ_DIR)/%.o)
	@echo "\033[0;36m            ==== Creating Library ===="

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(srcs) $(CFLAGS) -c $< -o $@
	@echo "\033[32m         ==== Creating Objcts Files ===="

all: $(NAME)

clean:
	@rm -f $(OBJS:%.o=$(OBJ_DIR)/%.o)
	 @echo "\033[33m    ==== All Object files deleted ===="

fclean: clean
	 @rm -f $(NAME)
	 @echo "\033[31m       ==== Everything deleted ===="

re: fclean all
