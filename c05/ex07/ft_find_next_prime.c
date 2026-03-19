/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-16 16:49:23 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-16 16:49:23 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int		j;

	j = 2;
	if (nb < 2)
		return (0);
	while (j * j <= (unsigned int) nb)
	{
		if (nb % j == 0)
			return (0);
		j++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	unsigned int		j;

	j = 0;
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb + j) && j < (unsigned int)nb)
	{
		j++;
	}
	return (j + nb);
}
// #include <stdio.h>
// int main()
// {
// 	int		i;
// 	i = 0;
// 	printf("%d",ft_find_next_prime(2147483646));
// }