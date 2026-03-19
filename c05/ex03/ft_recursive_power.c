/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-15 20:33:27 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-15 20:33:27 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	if (power > 1)
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}
// #include <stdio.h>
// int main()
// {
// 	int		nb;
// 	int		power;
// 	nb = 2;
// 	power = 0;
// 	printf("%d",ft_recursive_power(nb,power));
// }