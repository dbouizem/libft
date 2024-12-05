/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:18:03 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/15 16:43:58 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** ft_strlen -- calcule la longueur d'une chaîne de caractères
**
** Le type `size_t` est utilisé pour retourner la longueur, car il
** représente une taille non signée et est suffisamment grand pour
** contenir la taille maximale d'un objet en mémoire sur la plateforme
** cible. Cela garantit que la fonction peut gérer correctement les
** longues chaînes sur tout système compatible C.
**
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}
/*
int	main()
{
	char	*str = "---Testting ft_strlen---";
	size_t	result = ft_strlen(str);
	printf("The length of str: %zu\n", result);
	return (0);
}*/
