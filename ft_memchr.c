/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:27:01 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/15 19:35:59 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t				i;
	const unsigned char	*p;

	p = ptr;
	i = 0;
	while (i < num)
	{
		if (p[i] == (unsigned char)value)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>

int	main(void)
{
	char    name[] = "Carmelo";
	int     value = 97;
	size_t  num = 3;
	char    *result;

	result = ft_memchr(name, value, num);

	if (result != NULL)
		printf("First occurrence %s", result);
	else
		printf("Nada encontrado %s", result);
} */