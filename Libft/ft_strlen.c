/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 02:39:56 by nosilves          #+#    #+#             */
/*   Updated: 2023/05/26 13:30:12 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*The strlen() function computes the length of the string s. 
	The strlen() function returns the number of characters that 
	precede the terminating NUL character.*/

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/*
#include <stdio.h>
int	main(int argc, const char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_strlen(argv[1]));
	}
	else
	{
		printf("%s", "error");
	}
}*/
