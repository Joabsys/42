/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_part1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-25 by jesequie                   #+#    #+#             */
/*   Updated: 2026-05-25 by jesequie                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

static void	test_ft_isalpha(void)
{
	puts("\n  ft_isalpha");
	check("lowercase 'a'",    ft_isalpha('a')  && isalpha('a'));
	check("uppercase 'Z'",    ft_isalpha('Z')  && isalpha('Z'));
	check("digit '3' => 0",   !ft_isalpha('3') && !isalpha('3'));
	check("space ' ' => 0",   !ft_isalpha(' ') && !isalpha(' '));
}

static void	test_ft_isdigit(void)
{
	puts("\n  ft_isdigit");
	check("'0'",          ft_isdigit('0')  && isdigit('0'));
	check("'9'",          ft_isdigit('9')  && isdigit('9'));
	check("'a' => 0",     !ft_isdigit('a') && !isdigit('a'));
}

static void	test_ft_isalnum(void)
{
	puts("\n  ft_isalnum");
	check("'b'",          ft_isalnum('b')  && isalnum('b'));
	check("'5'",          ft_isalnum('5')  && isalnum('5'));
	check("'!' => 0",     !ft_isalnum('!') && !isalnum('!'));
}

static void	test_ft_isascii(void)
{
	puts("\n  ft_isascii");
	check("0",     ft_isascii(0));
	check("127",   ft_isascii(127));
	check("128 => 0", !ft_isascii(128));
}

static void	test_ft_isprint(void)
{
	puts("\n  ft_isprint");
	check("' '",        ft_isprint(' ')   && isprint(' '));
	check("'~'",        ft_isprint('~')   && isprint('~'));
	check("'\\t' => 0", !ft_isprint('\t') && !isprint('\t'));
}

static void	test_ft_strlen(void)
{
	puts("\n  ft_strlen");
	check("empty string",  ft_strlen("") == 0);
	check("\"hello\"",     ft_strlen("hello") == 5);
	check("\"42 school\"", ft_strlen("42 school") == 9);
}

static void	test_ft_memset(void)
{
	char	buf[10];

	puts("\n  ft_memset");
	ft_memset(buf, 'A', 5);
	buf[5] = '\0';
	check("5 x 'A'", strcmp(buf, "AAAAA") == 0);
	ft_memset(buf, 0, 5);
	check("zero fill", buf[0] == 0 && buf[4] == 0);
}

static void	test_ft_bzero(void)
{
	char	buf[8] = "libft";

	puts("\n  ft_bzero");
	ft_bzero(buf, 3);
	check("first 3 bytes zeroed", buf[0] == 0 && buf[1] == 0 && buf[2] == 0);
	check("byte 3 untouched",     buf[3] == 'f');
}

static void	test_ft_memcpy(void)
{
	char	dst[16];

	puts("\n  ft_memcpy");
	ft_memcpy(dst, "hello", 6);
	check("copy \"hello\"", strcmp(dst, "hello") == 0);
	check("n=0 is safe",   ft_memcpy(dst, "xyz", 0) == dst);
}

static void	test_ft_memmove(void)
{
	char	buf[] = "memmove_test";

	puts("\n  ft_memmove");
	ft_memmove(buf + 3, buf, 7);
	check("overlapping copy", strncmp(buf + 3, "memmove", 7) == 0);
}

static void	test_ft_strlcpy(void)
{
	char	dst[10];
	size_t	ret;

	puts("\n  ft_strlcpy");
	ret = ft_strlcpy(dst, "hello world", sizeof(dst));
	check("truncated copy",     strcmp(dst, "hello wor") == 0);  /* 9 chars + NUL */
	check("returns src length", ret == 11);
}

static void	test_ft_strlcat(void)
{
	char	dst[16] = "hello";
	size_t	ret;

	puts("\n  ft_strlcat");
	ret = ft_strlcat(dst, " world", sizeof(dst));
	check("concat result",      strcmp(dst, "hello world") == 0);
	check("returns total len",  ret == 11);
}

static void	test_ft_toupper(void)
{
	puts("\n  ft_toupper");
	check("'a' -> 'A'",  ft_toupper('a') == 'A');
	check("'Z' -> 'Z'",  ft_toupper('Z') == 'Z');
	check("'3' -> '3'",  ft_toupper('3') == '3');
}

static void	test_ft_tolower(void)
{
	puts("\n  ft_tolower");
	check("'A' -> 'a'",  ft_tolower('A') == 'a');
	check("'z' -> 'z'",  ft_tolower('z') == 'z');
	check("'0' -> '0'",  ft_tolower('0') == '0');
}

static void	test_ft_strchr(void)
{
	const char	*s = "libft42";

	puts("\n  ft_strchr");
	check("finds 'f'",         ft_strchr(s, 'f') == s + 3);
	check("finds '\\0'",       ft_strchr(s, '\0') == s + 7);
	check("returns NULL",      ft_strchr(s, 'z') == NULL);
}

static void	test_ft_strrchr(void)
{
	const char	*s = "abcabc";

	puts("\n  ft_strrchr");
	check("last 'a'",     ft_strrchr(s, 'a') == s + 3);
	check("not found",    ft_strrchr(s, 'z') == NULL);
}

static void	test_ft_strncmp(void)
{
	puts("\n  ft_strncmp");
	check("equal strings",   ft_strncmp("abc", "abc", 3) == 0);
	check("diff at pos 2",   (ft_strncmp("abd", "abc", 3) > 0));
	check("n=0 => 0",        ft_strncmp("abc", "xyz", 0) == 0);
}

static void	test_ft_memchr(void)
{
	const char	*s = "hello";

	puts("\n  ft_memchr");
	check("finds 'l'",     ft_memchr(s, 'l', 5) == s + 2);
	check("not in range",  ft_memchr(s, 'l', 2) == NULL);
}

static void	test_ft_memcmp(void)
{
	puts("\n  ft_memcmp");
	check("equal",    ft_memcmp("abc", "abc", 3) == 0);
	check("differ",   (ft_memcmp("abd", "abc", 3) > 0));
	check("n=0 => 0", ft_memcmp("abc", "xyz", 0) == 0);
}

static void	test_ft_strnstr(void)
{
	puts("\n  ft_strnstr");
	check("found",       ft_strnstr("hello world", "world", 11) != NULL);
	check("out of range",ft_strnstr("hello world", "world", 5) == NULL);
	check("empty needle",ft_strnstr("hello", "", 5) != NULL);
}

static void	test_ft_atoi(void)
{
	puts("\n  ft_atoi");
	check("\"42\"",      ft_atoi("42") == 42);
	check("\"-7\"",      ft_atoi("-7") == -7);
	check("\"  +3\"",    ft_atoi("  +3") == 3);
	check("\"0\"",       ft_atoi("0") == 0);
}

/* ─── main ────────────────────────────────────────────────────────────────── */

int	main(void)
{
	printf("\033[1m\033[0;36m");
	printf("─────────────────────────────────────────\n");
	printf("          PART 1  —  Libc functions       \n");
	printf("─────────────────────────────────────────\n");
	printf("\033[0m");

	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_strnstr();
	test_ft_atoi();

	printf("\n\033[1m");
	printf("─────────────────────────────────────────\n");
	printf("  Result: \033[0;32m%d passed\033[0m  \033[0;31m%d failed\033[0m\n",
		g_pass, g_fail);
	printf("\033[1m─────────────────────────────────────────\033[0m\n\n");
	return (g_fail > 0 ? 1 : 0);
}
