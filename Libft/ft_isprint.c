/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 02:34:49 by nosilves          #+#    #+#             */
/*   Updated: 2023/05/25 14:43:18 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*  The isprint() function tests for any printing character, including
     space (` '). Returns 0 = false. Returns non-0 = true.*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
		a = ft_isprint(argv[1][0]);
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
