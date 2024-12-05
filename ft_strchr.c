/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:50:56 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/16 13:58:04 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** ft_strchr -- localise la première occurrence d'un caractère dans une chaîne
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}
/*
int	main()
{
	char *src = "Coucou";
	int c = 'o';
	char *result = ft_strchr(src, c);
	printf("result: %s", result);
	return (0);
}*/
