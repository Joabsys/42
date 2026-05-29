
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-29 20:35:47 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-29 20:35:47 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
// #include <stdio.h>
// int main(void)
// {
// 	t_list *list1;
// 	t_list *list2;
// 	t_list *temp;
// 	t_list *lst;
// 	list1 = ft_lstnew("joab");
// 	list2 = ft_lstnew("esequiel");
// 	list1->next = list2;
// 	temp = list1;
// 	lst = ft_lstlast(temp);
// 	printf("%s",(char*)lst->content);
// }
