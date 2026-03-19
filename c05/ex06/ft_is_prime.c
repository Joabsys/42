/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-16 13:11:28 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-16 13:11:28 by jesequie         ###   ########.fr       */
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
// #include <stdio.h>
// int main()
// {
// 	printf("%d",ft_is_prime(2));
// }