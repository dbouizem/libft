/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 04:25:38 by dbouizem          #+#    #+#             */
/*   Updated: 2024/12/05 04:25:46 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** ft_split découper une chaîne de caractères en un tableau de sous-chaînes.
**
*/

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	if (!s || !c)
		return (NULL);
	ft_strtrim(s, c);
	while (s)
	{
		
	}
}
