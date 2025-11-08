CC			= cc

AR			= ar

ARFLAGS		= rc

HEADER		= libft.h

CFLAGS		= -Wall -Wextra -Werror

NAME		= libft.a

SRC			= ft_isalpha.c \
			  ft_isdigit.c \
			  ft_isalnum.c \
			  ft_isascii.c \
			  ft_isprint.c \
			  ft_strlen.c \
			  ft_memset.c \
			  ft_bzero.c \
			  ft_memcpy.c \
			  ft_memmove.c \
			  ft_strlcpy.c \
			  ft_strlcat.c \
			  ft_toupper.c \
			  ft_tolower.c \
			  ft_strchr.c \
			  ft_strrchr.c \
			  ft_strncmp.c \
			  ft_memcmp.c \
			  ft_memchr.c \
			  ft_strnstr.c \
			  ft_atoi.c \
			  ft_calloc.c \
			  ft_strdup.c \
			  ft_substr.c \
			  ft_strjoin.c \
			  ft_strtrim.c \
			  ft_split.c \
			  ft_itoa.c \
			  ft_strmapi.c \
			  ft_striteri.c \
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putendl_fd.c \
			  ft_putnbr_fd.c

OBJ_DIR		= objs

OBJ			= $(patsubst %, $(OBJ_DIR)/%o, $(SRC:.c=.))


all: 		$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(ARFLAGS) $(NAME) $(OBJ)
			ranlib $(NAME)

$(OBJ_DIR)/%.o:		%.c | $(OBJ_DIR)
			$(CC) -o $@ -c $< $(CFLAGS) -I$(HEADER)

$(OBJ_DIR):
			mkdir $@

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
