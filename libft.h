/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:53:35 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/18 00:25:17 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *ptr, int value, size_t num);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memove(void *dest, const void *src, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			ft_bzero(void *s, size_t len);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *ptr, int value, size_t num);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start,
					size_t len);

#endif