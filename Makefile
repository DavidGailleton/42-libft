CC			= cc

AR			= ar

ARFLAGS		= rc

CFLAGS		= -Wall -Wextra -Werror -I libft.h

NAME		= libft.a

SRC			= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c

OBJDIR		= objs

OBJ			= $(patsubst %, $(OBJDIR)/%o, $(SRC:.c=.))


all: 		$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(ARFLAGS) $(NAME) $(OBJ)
			ranlib $(NAME)

$(OBJDIR)/%.o:		%.c | $(OBJDIR)
			$(CC) -o $@ -c $< $(CFLAGS)

$(OBJDIR):
			mkdir $@

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re 
