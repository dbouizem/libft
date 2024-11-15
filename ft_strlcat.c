/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:24:55 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/14 17:55:22 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
        size_t  i;
        size_t  j;
        size_t  dst_len;
        size_t  src_len;

        src_len = ft_strlen(src);
        dst_len = ft_strlen(dst);
        j = dst_len;
        i = 0;

        if (dst_len >= size)
                return (size + src_len);
        while (src[i] && j < size - 1)
        {
                dst[j] = src[i];
                j++;
                i++;
        }
        dst[j] = '\0';
        return (dst_len + src_len);
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
