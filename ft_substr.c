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
	unsigned int	result;

	result = len - start;	
	i = 0;
	if (len == 0 || !s)
		result = 1;
	if(!(dest = (char *)malloc(result)))
		return (NULL);
	while (start <= len)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	return (dest);
}
/* int main()
{
	//printf("%s", ft_substr("Carmelo", 2, ft_strlen("carmelo")));
	printf("%s", ft_substr("", 0, 0));
} */