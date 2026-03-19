/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-08 16:55:01 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-08 16:55:01 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char j0, char j1)
{
	write(1, &j0, 1);
	write (1, &j1, 1);
}

void	ft_print_comb2(void)
{
	int		j1;
	int		j2;
	char	k1;
	char	k2;

	j1 = -1;
	while (++j1 <= 98)
	{
		j2 = j1;
		while (++j2 <= 99)
		{
			k1 = j1 / 10 + '0';
			k2 = j1 % 10 + '0';
			ft_putchar(k1, k2);
			write(1, " ", 1);
			k1 = j2 / 10 + '0';
			k2 = j2 % 10 + '0';
			ft_putchar(k1, k2);
			if (j1 != 98 || j2 != 99)
			{
				write (1, ", ", 2);
			}
		}
	}
}
// int main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }