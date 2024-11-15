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

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
        size_t  i;
        size_t  src_len;

        src_len = ft_strlen(src);
        i = 0;
        if (size == 0)
                return (src_len);
        while (src[i] && i < size - 1)
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return (src_len);
}
int main()
{
        char dest[15];
        char *src = "Hello, World!";
        size_t size = 15;
        size_t len;

        len = ft_strlcpy(dest, src, size);
        printf("src: %s\n", src);
        printf("dest: %s\n", dest);
        printf("len: %zu\n", len);
        return (0);
}
