/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:48:21 by nosilves          #+#    #+#             */
/*   Updated: 2023/05/26 13:34:55 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*The memmove() function copies len bytes from string src to string
     dst.  The two strings may overlap; the copy is always done in a
     non-destructive manner.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*strsrc;
	unsigned char	*strdst;
	size_t			i;

	i = 0;
	strsrc = (unsigned char *)src;
	strdst = (unsigned char *)dst;
	if (strsrc == strdst)
		return (dst);
	if (strsrc < strdst)
	{
		while (i < len)
		{
			strdst[i] = strsrc[i];
			i++;
		}
	}
	else if (strsrc > strdst)
	{
		while (len--)
			strdst[len] = strsrc[len];
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

//	dst[0] = '\0';
	src = str;
	printf("Desti: %s\n", ft_memmove(dst, src, 23));
	printf("Original: %s\n", src);
}*/
