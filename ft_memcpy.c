/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:14:12 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/16 13:25:02 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*cdest = (unsigned char *)dest;
	unsigned char	*csrc = (unsigned char *)src;

	while (n--)
		*cdest++ = *csrc++;
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, world!";
    char dest[20];

    ft_memcpy(dest, src, 3); // Copie le contenu de src dans dest
	dest[3] = '\0';
    printf("Source: %s\n", src);    // Affiche : "Hello, world!"
    printf("Destination: %s\n", dest); // Affiche : "Hello, world!"

    return 0;
}*/
