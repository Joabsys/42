/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-25 by jesequie                   #+#    #+#             */
/*   Updated: 2026-05-25 by jesequie                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ─── Helpers ─────────────────────────────────────────────────────────────── */

static int	g_pass = 0;
static int	g_fail = 0;

static void	check(const char *name, int ok)
{
	if (ok)
	{
		printf("  \033[0;32m✓\033[0m  %s\n", name);
		g_pass++;
	}
	else
	{
		printf("  \033[0;31m✗\033[0m  %s\n", name);
		g_fail++;
	}
}

/* helper: build a small list [1]->[2]->[3] */
static t_list	*make_list(void)
{
	t_list	*head;
	t_list	*n2;
	t_list	*n3;

	head = ft_lstnew((void *)1);
	n2   = ft_lstnew((void *)2);
	n3   = ft_lstnew((void *)3);
	if (!head || !n2 || !n3)
		return (NULL);
	head->next = n2;
	n2->next   = n3;
	return (head);
}

/* ─── Tests ───────────────────────────────────────────────────────────────── */

static void	test_ft_lstnew(void)
{
	t_list	*node;

	puts("\n  ft_lstnew");
	node = ft_lstnew((void *)42);
	check("not NULL",    node != NULL);
	check("content 42",  node && node->content == (void *)42);
	check("next is NULL",node && node->next == NULL);
	free(node);
}

static void	test_ft_lstadd_front(void)
{
	t_list	*lst;
	t_list	*head;

	puts("\n  ft_lstadd_front");
	lst  = ft_lstnew((void *)2);
	head = ft_lstnew((void *)1);
	ft_lstadd_front(&lst, head);
	check("new head content", lst->content == (void *)1);
	check("old head at next", lst->next->content == (void *)2);
	free(lst->next);
	free(lst);
}

static void	test_ft_lstlast(void)
{
	t_list	*lst;
	t_list	*last;

	puts("\n  ft_lstlast");
	lst  = make_list();
	last = ft_lstlast(lst);
	check("last content is 3", last && last->content == (void *)3);
	check("last->next is NULL", last && last->next == NULL);
	/* free manually */
	free(lst->next->next);
	free(lst->next);
	free(lst);
}

static void	test_ft_lstadd_back(void)
{
	t_list	*lst;
	t_list	*tail;

	puts("\n  ft_lstadd_back");
	lst  = ft_lstnew((void *)1);
	tail = ft_lstnew((void *)99);
	ft_lstadd_back(&lst, tail);
	check("last content 99", ft_lstlast(lst)->content == (void *)99);
	free(lst->next);
	free(lst);
}

static void	del_node(void *content)
{
	(void)content; /* content is a raw int cast, nothing to free */
}

static void	test_ft_lstdelone(void)
{
	t_list	*node;

	puts("\n  ft_lstdelone");
	node = ft_lstnew((void *)7);
	ft_lstdelone(node, del_node);
	check("no crash", 1); /* if we get here, it worked */
}

static void	test_ft_lstclear(void)
{
	t_list	*lst;

	puts("\n  ft_lstclear");
	lst = make_list();
	ft_lstclear(&lst, del_node);
	check("list is NULL after clear", lst == NULL);
}

/* global counter for ft_lstiter test */
static int	g_iter_sum = 0;

static void	sum_content(void *content)
{
	g_iter_sum += (int)(long)content;
}

static void	test_ft_lstiter(void)
{
	t_list	*lst;

	puts("\n  ft_lstiter");
	lst = make_list(); /* [1]->[2]->[3] */
	g_iter_sum = 0;
	ft_lstiter(lst, sum_content);
	check("sum of contents == 6", g_iter_sum == 6);
	ft_lstclear(&lst, del_node);
}

static void	*double_content(void *content)
{
	return ((void *)((long)content * 2));
}

static void	test_ft_lstmap(void)
{
	t_list	*lst;
	t_list	*mapped;

	puts("\n  ft_lstmap");
	lst    = make_list(); /* [1]->[2]->[3] */
	mapped = ft_lstmap(lst, double_content, del_node);
	check("not NULL",      mapped != NULL);
	check("first  == 2",   mapped && mapped->content == (void *)2);
	check("second == 4",   mapped && mapped->next && mapped->next->content == (void *)4);
	check("third  == 6",   mapped && mapped->next && mapped->next->next
		&& mapped->next->next->content == (void *)6);
	check("third->next NULL", mapped && mapped->next && mapped->next->next
		&& mapped->next->next->next == NULL);
	ft_lstclear(&lst, del_node);
	ft_lstclear(&mapped, del_node);
}

/* ─── main ────────────────────────────────────────────────────────────────── */

int	main(void)
{
	printf("\033[1m\033[0;36m");
	printf("─────────────────────────────────────────\n");
	printf("       BONUS  —  Linked list functions    \n");
	printf("─────────────────────────────────────────\n");
	printf("\033[0m");

	test_ft_lstnew();
	test_ft_lstadd_front();
	test_ft_lstlast();
	test_ft_lstadd_back();
	test_ft_lstdelone();
	test_ft_lstclear();
	test_ft_lstiter();
	test_ft_lstmap();

	printf("\n\033[1m");
	printf("─────────────────────────────────────────\n");
	printf("  Result: \033[0;32m%d passed\033[0m  \033[0;31m%d failed\033[0m\n",
		g_pass, g_fail);
	printf("\033[1m─────────────────────────────────────────\033[0m\n\n");
	return (g_fail > 0 ? 1 : 0);
}
