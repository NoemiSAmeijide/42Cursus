/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 02:54:08 by nosilves          #+#    #+#             */
/*   Updated: 2023/05/26 13:31:32 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*The memset() function writes len bytes of value c (converted to an
     unsigned char) to the string b.*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (len--)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[20] = "Hello World!";

	printf("Abans: %s\n", str);
	ft_memset(str, '*', 5);
	printf("Abans: %s\n", str);
}*/
