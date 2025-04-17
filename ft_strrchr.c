/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:19:27 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/13 17:55:45 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;

	last = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			last = str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return ((char *)last);
}
/* #include <stdio.h>
int	main(void)
{
	const char	name[] = "Carmelo oliveira";
	int	c = 97;
	char *result;

	result = ft_strrchr(name, c);
	if (result != NULL)
		printf("Última ocorrência de '%c': %s\n", c, result);
	else
		printf("%c not found\n", c);
return (0);

} */