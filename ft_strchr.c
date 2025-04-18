/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 14:16:11 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/13 15:09:22 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}
/* #include <stdio.h>

int	main(void)
{
	char	name[] = "Carmelo";
	int	value = 97;
	char *result;

	result = ft_strchr(name, value);
	if (result != NULL)
		printf("O caractere '%c' foi encontrado
			na posição: %ld\n", value, result - name);
	else
		printf("Caractere não encontrado.\n");

	return (0);
} */