NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SCRS =	ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memove.c \
		ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memcmp.c \
		ft_strnstr.c \

OBJS = $(SCRS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

run:
	./a.out

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) ./a.out

re: fclean all
	

