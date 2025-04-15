/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:29:02 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/15 21:16:17 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i, j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);

	while (i < len)
	{
		if (haystack[i] == needle[0])
			{
				while (needle[j] && (i + j) < len && haystack[i + j]
					== needle[j])
				{
					if (haystack[i + j] != needle[j])
						break;
					j++;	
				}
			if (needle[j] == '\0')
				return (char *)(haystack + i);
			}
		i++;
	}
	return NULL;
}

int	main()
{
	char	stack[] = "Hello";
	char	need[] = "ca";
	int	i = 6;
	
	char *result = ft_strnstr(stack, need, i);
	if (result)
		printf("Found %s\n", result);
	else
		printf("Not found %s", result);
	return (0);
}