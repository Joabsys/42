/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-15 18:31:44 by jesequie          #+#    #+#             */
/*   Updated: 2026-03-15 18:31:44 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		k;

	k = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb > 1)
	{
		k *= nb - 1;
		nb--;
	}
	return (k);
}
// #include <stdio.h>
// int main()
// {
// 	int 	fatorial;
// 	fatorial = 8;
// 	printf("%d",ft_iterative_factorial(6));
// }