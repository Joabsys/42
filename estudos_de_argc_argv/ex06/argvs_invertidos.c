/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argvs_invertidos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-15 14:00:44 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-15 14:00:44 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		j;
	char	k;
	int 	y;
	y = 0;
	j = 0;
	while (j < argv[y][j])
	{
		j++;
	}
	while (argv[1][y])
	{
		k = y + '0';
		write (1, &k, 1);
		y--;
	}
}
