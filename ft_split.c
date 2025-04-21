/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:51:21 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/21 22:02:18 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_word(char const *s, char c)
{
	size_t	word;
	size_t	count;

	word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && word == 0)
		{
			word = 1;
			count++;
		}
		else if (*s == c)
			word = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	size_t	len;

	i = 0;
	arr = (char **)malloc((c_word(s, c) + 1) * sizeof(char *));
	if (!s || !arr)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			arr[i++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	arr[i] = '\0';
	return (arr);
}
/* int	main(void)
{
	char **split = ft_split("test test1 test2 test3 ", ' ');
	int	i = 0;

	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}

} */