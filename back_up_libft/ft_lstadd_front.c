/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-29 18:29:58 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-29 18:29:58 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
#include <stdio.h>
int main ()
{
	t_list *list =NULL;
	t_list *temp;
	t_list *ptr1;
	t_list *ptr;
	ptr1 = ft_lstnew("100");
	ft_lstadd_front(&list,ptr1);
	ptr = ft_lstnew("50");
	ft_lstadd_front(&list,ptr);
temp = list;
	while(temp)
	{
		printf("%s",(char*)temp->content);
		temp = temp->next;
	}
	free(ptr1);
	free(ptr);
}
/*13. Resumo mental simples

A função faz 2 coisas:

new aponta para o antigo começo

e depois:

o começo da lista vira new

Ou seja:

ANTES:
A -> B -> C

DEPOIS:
X -> A -> B -> C
14. Complexidade

A operação é extremamente eficiente:

Tempo: O(1)
Não percorre a lista
Apenas altera ponteiros

Por isso adicionar no início é muito rápido em listas encadeadas.*/