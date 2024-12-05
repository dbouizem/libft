/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:52:26 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/15 16:56:09 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** ft_tolower -- convertit une lettre majuscule en minuscule
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
int	main()
{
	int	c;
	c = 65;
	while (c <= 90)
	{
		printf("Original: %c, Result: %c\n", c, ft_tolower(c));
		c++;
	}
	return (0);
}*/
