/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 00:08:41 by dbouizem          #+#    #+#             */
/*   Updated: 2024/12/01 00:08:46 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** atoi, atoi_l -- convertit la chaîne ASCII en entier
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	if (!str)
		return (0);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
/*
int main()
{
	printf("Result: %d\n", ft_atoi("   -42"));
	printf("Result: %d\n", ft_atoi("4193 with words"));
	printf("Result: %d\n", ft_atoi("words 42"));
	printf("Result: %d\n", ft_atoi("   +123"));
	printf("Result: %d\n", ft_atoi("0"));
	printf("Result: %d\n", ft_atoi(NULL));
	return 0;
}*/
