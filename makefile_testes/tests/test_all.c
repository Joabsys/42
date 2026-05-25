/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-25 by jesequie                   #+#    #+#             */
/*   Updated: 2026-05-25 by jesequie                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  test_all.c — umbrella runner that includes every test from the three
**               individual files.  Each file defines its own main(); here we
**               rename them with macros before inclusion so we can call all
**               three from a single main.
*/

/* ── pull in all three test suites, renaming their mains ───────────────── */

#define main	main_part1
#include "test_part1.c"
#undef  main

#undef  g_pass
#undef  g_fail

#define main	main_part2
#include "test_part2.c"
#undef  main

#undef  g_pass
#undef  g_fail

#define main	main_bonus
#include "test_bonus.c"
#undef  main

/* ── global totals ─────────────────────────────────────────────────────── */

int	main(void)
{
	int	ret;

	printf("\033[1m\033[0;36m");
	printf("=========================================\n");
	printf("         LIBFT — FULL TEST SUITE         \n");
	printf("=========================================\n");
	printf("\033[0m");

	ret  = main_part1();
	ret += main_part2();
	ret += main_bonus();

	printf("\033[1m\033[0;36m");
	printf("=========================================\n");
	if (ret == 0)
		printf("  \033[0;32mAll suites passed!\033[1m\033[0;36m\n");
	else
		printf("  \033[0;31m%d suite(s) had failures.\033[1m\033[0;36m\n", ret);
	printf("=========================================\n");
	printf("\033[0m\n");
	return (ret > 0 ? 1 : 0);
}
