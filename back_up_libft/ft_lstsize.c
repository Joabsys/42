/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-29 20:34:36 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-29 20:34:36 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
// #include <stdio.h>
// int main(void)
// {
// 	int i;
// 	t_list *list1;
// 	t_list *list2;
// 	t_list *temp;
// 	list1 = ft_lstnew("joab");
// 	list2 = ft_lstnew("esequiel");
// 	list1->next = list2;
// 	temp = list1;
// 	i=ft_lstsize(temp);
// printf("%d",i);
//free(list1);
//free(list2);
// }
