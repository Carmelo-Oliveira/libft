/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:08:55 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/15 19:26:48 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = ft_strlen(dest);
	if (size <= i)
	{
		return (size + ft_strlen(src));
	}
	while (src[j] && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
/* #include <stdio.h>
int	main(void)
{
	char	first_name[20] = "Carmelo";
	char	last_name[] = "Oliveira";
	int	len = 18;
	int result;

	result = ft_strlcat(first_name, last_name, len);
	printf("%s \n", first_name);
	printf("%d\n", result);

} */