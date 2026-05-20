/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Istadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 21:06:11 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 21:06:11 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
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