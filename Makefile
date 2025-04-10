name = libft.a

ft_strlen.o: ft_strlen.c
	cc -c ft_strlen.c

all: ft_strlen.o
	cc testes.c ft_strlen.o

run:
	a.out

clean:
	rm -rf ft_strlen.o

fclean: clean
	rm -rf a.out

re: fclean
	$(MAKE) all