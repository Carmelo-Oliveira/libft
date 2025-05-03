/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:27:01 by carmoliv          #+#    #+#             */
/*   Updated: 2025/05/03 18:20:05 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Search first byte of the value received of the pointer
void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t				i;
	const unsigned char	*p;

	p = ptr;
	i = 0;
	if (!ptr)
		return (NULL);
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
		printf("Not found %s", result);
} */