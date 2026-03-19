/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-08 14:12:01 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-08 14:12:01 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	int		v1;
	int		v2;
	int		v3;

	v1 = 0;
	v2 = 0;
	v3 = 0;
	v1 = '0' -1;
	while (++v1 <= '7')
	{
		v2 = v1;
		while (++v2 <= '8')
		{
			v3 = v2;
			while (++v3 <= '9')
			{
				ft_putchar(v1, v2, v3);
				if ((v1 != '7' || v2 != '8' || v3 != '9'))
					write (1, ", ", 2);
			}
		}
	}
}
// int main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }