/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 12:20:13 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/13 15:22:28 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*n;
	size_t			i;

	i = 0;
	n = (unsigned char *)s;
	while (i < len)
	{
		n[i] = 0;
		i++;
	}
}
/*#include <stdio.h>
int	main(void)
{
	char	name[] = "Carmelo Oliveira";
	ft_bzero(name, 7);
	printf("%s \n",name);
}*/