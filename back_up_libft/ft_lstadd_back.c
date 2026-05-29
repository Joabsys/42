/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-29 20:14:34 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-29 20:14:34 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}
#include <stdio.h>
int main(void)
{
	t_list *list1;
	t_list *list2;
	t_list *temp;
	t_list *lst = NULL;
	list1 = ft_lstnew("joab");
	ft_lstadd_back(&list1,lst);
	list2 = ft_lstnew("esequiel");
	ft_lstadd_back(&list2,lst);
	temp = lst;
	
	printf("%s",(char*)temp->content);
}
