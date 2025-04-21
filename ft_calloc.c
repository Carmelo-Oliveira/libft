/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:16:28 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/21 22:10:56 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int	*ptr;

	ptr = (int *)malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/* int	main()
{
	char *i;

	i = (char *)ft_calloc(10, sizeof(int));
	int j = 0;
	while(j < 40)
	{
		printf("%d - %d \n",i[j], j);
		j++;
	}
} */