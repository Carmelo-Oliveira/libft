name = libft.a

ft_strlen.o: ft_strlen.c
	cc -c ft_strlen.c

all: ft_strlen.o
<<<<<<< HEAD
	cc teste.c ft_strlen.o
=======
	cc testes.c ft_strlen.o
>>>>>>> 8ad37c46f700d3e64b626e1f77b66da945441f79

run:
	a.out

clean:
	rm -rf ft_strlen.o

fclean: clean
<<<<<<< HEAD
	rm -rf $(NAME)
=======
	rm -rf a.out
>>>>>>> 8ad37c46f700d3e64b626e1f77b66da945441f79

re: fclean
	$(MAKE) all