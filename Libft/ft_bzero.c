/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:39:46 by nosilves          #+#    #+#             */
/*   Updated: 2023/05/26 13:32:11 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*The bzero() function writes n zeroes bytes to the start of the string s.  
 	If n is zero, bzero() does nothing.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (n--)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
/*
#include <strings.h>
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char s[20] = "Hello World!";
	char d[20] = "Hello World!";

	printf("Abans: %s\n", s);
	write (1, &s, 20);
	bzero(s, 4);
	printf("\nDespres: %s\n", s);
	write (1, &s, 20);
	printf("\n\nFTAbans: %s\n", d);
	write (1, &d, 20);
	ft_bzero(d, 4);
	printf("\nFTDespres: %s\n", d);
	write (1, &d, 20);
}*/
