/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:46:25 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/14 17:24:05 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t n)
{
	size_t	lensrc;

	lensrc = ft_strlen(src);
	if (n > 0)
	{
		while (--n && *src)
			*dest++ = *src++;
		*dest = '\0';
	}
	return (lensrc);
}
