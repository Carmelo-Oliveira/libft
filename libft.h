#ifndef libft_H
#define libft_H
#include <unistd.h>
#include <stdio.h>

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
size_t  ft_strlen(const char *str);
void    *ft_memset(void *ptr, int value, size_t num);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memove(void *dest, const void *src, size_t n);
size_t   ft_strlcpy(char *dst, const char *src, size_t dstsize);
int     ft_toupper(int c);
int     ft_tolower(int c);
void	bzero(void *s, size_t len);





#endif