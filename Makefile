name = libft.a

ft_strlen.o: ft_strlen.c
	cc -c ft_strlen.c

all: ft_strlen.o
	cc teste.c ft_strlen.o

run:
	a.out

clean:
	rm -rf ft_strlen.o

fclean: clean
	rm -rf $(NAME)

re: fclean
	$(MAKE) all