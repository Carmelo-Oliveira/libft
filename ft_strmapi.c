/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:49:46 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/22 21:24:58 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_dest;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	new_dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_dest)
		return (NULL);
	while (s[i])
	{
		new_dest[i] = f(i, s[i]);
		i++;
	}
	new_dest[i] = '\0';
	return (new_dest);
}
/* char	my_upper(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}
int	main(void)
{
	char	*s = "abcde";
	char 	*result;

	result = ft_strmapi(s, my_upper);
	printf("alter each character: %s\n", result);
} */