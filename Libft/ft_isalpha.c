/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:39:42 by nosilves          #+#    #+#             */
/*   Updated: 2023/05/25 14:41:58 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*The isalpha() function tests for any character for an alpha character, lower
     or upper. Returns 0 = false. Returns non-0 = true*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
#include <unistd.h>
int	main(int argc, char **argv)
{
	int	a;

	if (argc != 2)
		write (1, "error", 5);
	else
	{
		a = ft_isalpha(argv[1][0]);
		if (a == 0)
		{
			write (1, "no", 2);
		}
		else
		{
			write (1, "si", 2);
		}
	}
}*/
