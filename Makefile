.PHONY: all clean fclean re bonus

CC = clang

NAME = libft.a

GCC_F = -Wall -Wextra -Werror

SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
			ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
			ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
			ft_toupper.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c \

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c \
			ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\


OBJS	= ${SRCS:.c=.o}
BONUS_O	= $(BONUS_SRC:.c=.o)
INCLUDE	= libft.h

all: $(NAME)

$(NAME):
			${CC} -I . ${GCC_F} -c ${SRCS}
			ar rcs ${NAME} ${OBJS}
			rm -f ${OBJS}

bonus:		$(NAME) $(BONUS_O)
			ar rcs ${NAME} ${BONUS_O}
			rm -f ${BONUS_O}

.c.o:
		$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
		rm -f ${OBJS} ${BONUS_O}

fclean:		clean
			$(RM) $(NAME)

re:	fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus
