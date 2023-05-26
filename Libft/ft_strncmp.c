/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 03:31:21 by nosilves          #+#    #+#             */
/*   Updated: 2023/05/26 13:40:34 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*The strcmp() and strncmp() functions lexicographically compare the null-
     terminated strings s1 and s2. The strcmp() and strncmp() functions 
	 return an integer greater than, equal to, or less than 0, according 
	 what the string s1 is than the string s2.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("%d\n", ft_strncmp("Hell", "Hella", 5));
    printf("%d", strncmp("Hell", "Hella", 5));
}*/
