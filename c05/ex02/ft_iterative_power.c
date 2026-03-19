/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-15 20:00:41 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-15 20:00:41 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		k;

	i = 0;
	k = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		k *= nb;
		i++;
	}
	return (k);
}
// #include <stdio.h>
// int main()
// {
// 	int		vl;
// 	int		power;
// 	vl = 2;
// 	power = 5;
// 	printf("%d",ft_iterative_power(vl,power));
// }