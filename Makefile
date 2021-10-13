NAME	= libft.a
HEADER	= libft.h
SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_striteri.c \
		ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_split.c ft_strchr.c ft_toupper.c \
		ft_strdup.c ft_strjoin.c ft_strlcat.c ft_putnbr_fd.c ft_putendl_fd.c \
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c
OBJS	= $(SRCS:.c=.o)
BONUS_SRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstlast.c
BONUSOBJ	= $(BONUS_SRCS:.c=.o)
AR		= ar rcs
CC		= cc
RM		= rm -f
LDFLAGS	=
CFLAGS	= -Wall -Werror -Wextra -g
NORM	= norminette
NFLAGS	= -R CheckForbiddenSourceHeader

all: $(NAME)

bonus:$(NAME) $(BONUSOBJ)
	$(AR) $(NAME) $(BONUSOBJ)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) -c $(CFLAGS) $< -o $@

norm: $(SRCS)
	$(NORM) $(NFLAGS) $^

clean:
	$(RM) $(OBJS) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re