/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:14:05 by nosilves          #+#    #+#             */
/*   Updated: 2023/05/26 13:35:17 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*The memcpy() function copies n bytes from memory area src to memory area
     dst.  If dst and src overlap, behavior is undefined.  Applications in
     which dst and src might overlap should use memmove(3) instead.*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*strsrc;
	unsigned char	*strdst;
	size_t			i;

	i = 0;
	strsrc = (unsigned char *)src;
	strdst = (unsigned char *)dst;
	while (strsrc[i] != '\0' && i < n)
	{
		strdst[i] = strsrc[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
int	main(void)
{
	char dst[20];
	const void *src;
	char str[20] = "Hello World!";

	dst[0] = '\0';	
	src = str;
	printf("Desti: %s\n", ft_memcpy(dst, src, 7));
	printf("Original: %s\n", src);
}*/
