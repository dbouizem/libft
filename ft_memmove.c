/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:02:17 by dbouizem          #+#    #+#             */
/*   Updated: 2024/12/22 07:24:18 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memmove - copie n octets de la chaîne src vers la chaîne dst.
**
** Compilation: gcc -Wall -Wextra -Werror ft_memmove.c ft_memcpy.c
*/

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char	*cdest;
	unsigned char	*csrc;

	if (!dest || !src || !n)
		return (dest);
	cdest = (unsigned char *) dest;
	csrc = (unsigned char *) src;
	if (cdest > csrc)
	{
		cdest += n;
		csrc += n;
		while (n--)
			*--cdest = *--csrc;
	}
	else
		ft_memcpy(cdest, csrc, n);
	return (dest);
}
/*
int	main ()
{
	char	*str = "Testting ft_memmove";
	char	dest[10];
	printf("Before memmove: %s\n", dest);
	ft_memmove(dest, str, 5);
	printf("After memmove: %s\n", dest);
	return (0);
}*/
