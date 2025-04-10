/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:38:19 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/10 22:45:29 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void    *ft_memset(void *ptr, int value, size_t num)
{
    size_t	i;
	unsigned char	*pt;

	i = 0;
	pt = (unsigned char *)ptr;
	while (i < num)
		{
			pt[i] = (unsigned char)value;
			i++;
		}
	return (ptr);
}
/*
int		main()
{
	char	nome[40] = "Carmelo";
	printf("%s \n",ft_memset(nome, 'i', 40));
	return (0);
}*/