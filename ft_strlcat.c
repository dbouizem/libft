/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:24:55 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/15 16:32:54 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	lend;
	size_t	lens;
	size_t	i;
	size_t	j;

	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	i = 0;
	j = lend;
	if (lend > n)
		return (n + lens);
	while (src[i] && j < n - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (lend + lens);
}
#include <stdio.h>
int main(void)
{
        char    dst1[30] = "Hello ";
        char    dst2[30] = "Hello ";
        char    src[] = "World!";
        size_t  result;

        // Test normal
        printf("Test 1:\n");
        result = ft_strlcat(dst1, src, 30);
        printf("dst: %s\n", dst1);
        printf("returned: %zu\n\n", result);

        // Test avec taille limitée
        printf("Test 2:\n");
        result = ft_strlcat(dst2, src, 8);
        printf("dst: %s\n", dst2);
        printf("returned: %zu\n", result);

        return (0);
}

