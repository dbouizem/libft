/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:22:12 by dbouizem          #+#    #+#             */
/*   Updated: 2024/11/11 18:24:07 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** isdigit, isnumber -- test de caractères décimaux
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
void    ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}

void    ft_putstr_fd(char *str, int fd)
{
        while (*str)
                write(fd, str++, 1);
}

int     main()
{
        int     c;

        c = 0;
        while (c <= 127)
        {
                if (ft_isdigit(c))
                {
                        ft_putstr_fd("OK for: ", 1);
                        ft_putchar_fd(c, 1);
                        ft_putchar_fd('\n', 1);
                }
                else
                {
                        ft_putstr_fd("Not DIGIT for: ", 1);
                        ft_putchar_fd(c, 1);
                        ft_putchar_fd('\n', 1);
                }
                c++;
        }
        return (0);
}*/
