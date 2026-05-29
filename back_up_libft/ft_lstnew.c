/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-29 11:39:00 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-29 11:39:00 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
//#include <stdio.h>
// int main()
// {
// 	t_list *name;
// 	t_list *nick;

// 	name = ft_lstnew("joab");
// 	nick = ft_lstnew("esequiel");

// 	name->next = nick;
// 		t_list *temp;
// 	temp = name;
//  	while(temp)
//  	{
// 		printf("%s",(char*)temp->content);
// 		temp = temp->next;
//  	}
// }
