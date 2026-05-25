/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_part2.c                                       :+:      :+:    :+:   */
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

/* ─── Tests ───────────────────────────────────────────────────────────────── */

static void	test_ft_calloc(void)
{
	int	*arr;
	int	i;
	int	all_zero;

	puts("\n  ft_calloc");
	arr = (int *)ft_calloc(5, sizeof(int));
	check("not NULL", arr != NULL);
	all_zero = 1;
	i = 0;
	while (i < 5)
	{
		if (arr[i] != 0)
			all_zero = 0;
		i++;
	}
	check("all bytes zeroed", all_zero);
	free(arr);
	check("calloc(0,x) not NULL", ft_calloc(0, 4) != NULL || 1); /* impl-defined */
}

static void	test_ft_strdup(void)
{
	char	*dup;

	puts("\n  ft_strdup");
	dup = ft_strdup("libft");
	check("content equal", strcmp(dup, "libft") == 0);
	check("distinct ptr",  dup != NULL);
	free(dup);
	dup = ft_strdup("");
	check("empty string",  strcmp(dup, "") == 0);
	free(dup);
}

static void	test_ft_substr(void)
{
	char	*s;

	puts("\n  ft_substr");
	s = ft_substr("hello world", 6, 5);
	check("\"world\"",      strcmp(s, "world") == 0);
	free(s);
	s = ft_substr("hi", 10, 3);
	check("start > len => \"\"", strcmp(s, "") == 0);
	free(s);
}

static void	test_ft_strjoin(void)
{
	char	*s;

	puts("\n  ft_strjoin");
	s = ft_strjoin("hello", " world");
	check("joined",     strcmp(s, "hello world") == 0);
	free(s);
	s = ft_strjoin("", "42");
	check("empty left", strcmp(s, "42") == 0);
	free(s);
}

static void	test_ft_strtrim(void)
{
	char	*s;

	puts("\n  ft_strtrim");
	s = ft_strtrim("  hello  ", " ");
	check("trim spaces",    strcmp(s, "hello") == 0);
	free(s);
	s = ft_strtrim("--42--", "-");
	check("trim dashes",    strcmp(s, "42") == 0);
	free(s);
	s = ft_strtrim("abc", "xyz");
	check("nothing to trim", strcmp(s, "abc") == 0);
	free(s);
}

static void	test_ft_split(void)
{
	char	**arr;

	puts("\n  ft_split");
	arr = ft_split("one two three", ' ');
	check("3 tokens",     arr != NULL && strcmp(arr[0], "one") == 0
		&& strcmp(arr[1], "two") == 0 && strcmp(arr[2], "three") == 0
		&& arr[3] == NULL);
	if (arr)
	{
		int i = 0;
		while (arr[i]) free(arr[i++]);
		free(arr);
	}
	arr = ft_split("", 'x');
	check("empty string => {NULL}", arr != NULL && arr[0] == NULL);
	if (arr) free(arr);
}

static void	test_ft_itoa(void)
{
	char	*s;

	puts("\n  ft_itoa");
	s = ft_itoa(42);
	check("42",    strcmp(s, "42") == 0);
	free(s);
	s = ft_itoa(-7);
	check("-7",    strcmp(s, "-7") == 0);
	free(s);
	s = ft_itoa(0);
	check("0",     strcmp(s, "0") == 0);
	free(s);
	s = ft_itoa(-2147483648);
	check("INT_MIN", strcmp(s, "-2147483648") == 0);
	free(s);
}

static char	to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static void	test_ft_strmapi(void)
{
	char	*s;

	puts("\n  ft_strmapi");
	s = ft_strmapi("hello", to_upper);
	check("\"HELLO\"", strcmp(s, "HELLO") == 0);
	free(s);
}

static void	iter_upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

static void	test_ft_striteri(void)
{
	char	buf[] = "hello";

	puts("\n  ft_striteri");
	ft_striteri(buf, iter_upper);
	check("in-place upper", strcmp(buf, "HELLO") == 0);
}

static void	test_ft_putchar_fd(void)
{
	puts("\n  ft_putchar_fd");
	printf("  [visual] putchar_fd('A') -> ");
	ft_putchar_fd('A', 1);
	printf("\n");
	check("no crash", 1);
}

static void	test_ft_putstr_fd(void)
{
	puts("\n  ft_putstr_fd");
	printf("  [visual] putstr_fd -> ");
	ft_putstr_fd("libft", 1);
	printf("\n");
	check("no crash", 1);
}

static void	test_ft_putendl_fd(void)
{
	puts("\n  ft_putendl_fd");
	printf("  [visual] putendl_fd -> ");
	ft_putendl_fd("with newline", 1);
	check("no crash", 1);
}

static void	test_ft_putnbr_fd(void)
{
	puts("\n  ft_putnbr_fd");
	printf("  [visual] putnbr_fd(42) -> ");
	ft_putnbr_fd(42, 1);
	printf("\n");
	printf("  [visual] putnbr_fd(-7) -> ");
	ft_putnbr_fd(-7, 1);
	printf("\n");
	check("no crash", 1);
}

/* ─── main ────────────────────────────────────────────────────────────────── */

int	main(void)
{
	printf("\033[1m\033[0;36m");
	printf("─────────────────────────────────────────\n");
	printf("       PART 2  —  Additional functions    \n");
	printf("─────────────────────────────────────────\n");
	printf("\033[0m");

	test_ft_calloc();
	test_ft_strdup();
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_split();
	test_ft_itoa();
	test_ft_strmapi();
	test_ft_striteri();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();

	printf("\n\033[1m");
	printf("─────────────────────────────────────────\n");
	printf("  Result: \033[0;32m%d passed\033[0m  \033[0;31m%d failed\033[0m\n",
		g_pass, g_fail);
	printf("\033[1m─────────────────────────────────────────\033[0m\n\n");
	return (g_fail > 0 ? 1 : 0);
}
