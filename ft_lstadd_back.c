/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 07:27:56 by dbouizem          #+#    #+#             */
/*   Updated: 2025/01/11 11:12:47 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_lstadd_back - ajoute un nouvel élément à la fin de la liste chaînée.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	list = ft_lstlast(*lst);
	list->next = new;
}
/*
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("[%d] -> ", *(int *)(lst->content));
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main()
{
	t_list	*lst = NULL;
	int	v1 = 01, v2 = 42, v3 = 99, v4 = 97;
	t_list	*n1 = ft_lstnew(&v1);
	t_list	*n2 = ft_lstnew(&v2);
	t_list	*n3 = ft_lstnew(&v3);
	t_list	*new = ft_lstnew(&v4);

	n1->next = n2;
	n2->next = n3;

	lst = n1;

	print_list(lst);
	print_list(new);

	ft_lstadd_back(&lst, new);

	print_list(lst);
	ft_lstclear(&lst, free);
	return (0);
}*/
