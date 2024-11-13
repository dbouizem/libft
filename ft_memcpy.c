/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:14:12 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/13 12:02:14 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*cdest;
	unsigned char	*csrc;

	cdest = (unsigned char *) dest;
	csrc = (unsigned char *) src;
	while (n--)
		*cdest++ = *csrc++;
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, world!";
    char dest[20];

    ft_memcpy(dest, src, strlen(src) + 1); // Copie le contenu de src dans dest

    printf("Source: %s\n", src);    // Affiche : "Hello, world!"
    printf("Destination: %s\n", dest); // Affiche : "Hello, world!"

    return 0;
}*/
