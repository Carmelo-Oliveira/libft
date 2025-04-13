NAME = libft.a
CC = gcc -Wall -Werror -Wextra
SCR = ft_strlen.c\


ft_strlen.o: 
	$(CC) -c $(SCR) 

all: ft_strlen.o
	cc testes.c ft_strlen.o

run:
	a.out

clean:
	rm -rf ft_strlen.o

fclean: clean
	rm -rf a.out


re: fclean all
	

