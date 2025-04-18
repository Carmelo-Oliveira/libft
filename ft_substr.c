/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 23:52:56 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/18 00:40:30 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int			i;
	char	*dest;
	size_t	len_s;

	len_s = ft_strlen(s);
	i = 0;
	if (!s || *s == '\0')
		return (NULL);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	if(!(dest = (char *)malloc(len + 1)))
		return (NULL);
	while (i < len && s[start + i])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
	//printf("%s", ft_substr("Carmelo", 2, ft_strlen("carmelo")));
	printf("%s", ft_substr("", 0, 0));
}*/