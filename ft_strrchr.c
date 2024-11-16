/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:59:20 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/16 15:18:44 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stddef.h>
#include <string.h> 
size_t	ft_strlen(const char *s)
{
	size_t len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i >= 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return ((char *)(s + i));
	return (NULL);
}
/*#include <stdio.h>
int     main()
{
        char *src = "Coucou";
        char c = 'o';
        char *result = ft_strrchr(src, c);
        printf("result: %s", result);
        return (0);
}*/
