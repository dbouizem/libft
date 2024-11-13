/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:22:09 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/13 10:53:05 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memset(void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*cs;

	cc = (unsigned char) c;
	cs = (unsigned char *) s;
	while (n--)
		*cs++ = cc;
	return (s);
}
