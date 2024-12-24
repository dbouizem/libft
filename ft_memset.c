/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:22:09 by dbouizem          #+#    #+#             */
/*   Updated: 2024/12/22 07:22:47 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memset - remplit une zone mémoire avec une valeur d'octet.
**
**Compilation: gcc -Wall -Wextra -Werror ft_strlen.c ft_strlcpy.c ft_memset.c
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*cs;

	cs = (unsigned char *) s;
	while (n--)
		*cs++ = (unsigned char) c;
	return (s);
}
/*
int	main()
{
	char *str = malloc(20 * sizeof(char));
	if (str == NULL)
	{
		printf("Error");
		return (1);
	}
	ft_strlcpy(str, "___Testting ft_memset___", 20);
	ft_memset(str, '+', 3 * sizeof(char));
	printf("After memset(): %s\n", str);
	free(str);
	return (0);
}*/
